//
// Created by giovanni on 15/09/16.
//

#ifndef PROGETTO_DOWNLOADER_H
#define PROGETTO_DOWNLOADER_H

#include <list>
#include <string>
#include "Subject.h"

class Downloader : public Subject {

public:
private:

    virtual void subscribe(Observer *o) override;
    virtual void unsubscribe(Observer *o) override;
    virtual void notify() override;

    void downloadFile();
    void addFile(std::string file);
    int getNumFiles() const;


private:
    std::list<Observer*> observers;
    std::list<std::string> files;

};


#endif //PROGETTO_DOWNLOADER_H
