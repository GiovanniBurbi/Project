//
// Created by giovanni on 15/09/16.
//

#ifndef PROGETTO_GUIDOWNLOADER_H
#define PROGETTO_GUIDOWNLOADER_H


#include "Observer.h"
#include "Downloader.h"

class GuiDownloader : public Observer {

public:

    GuiDownloader(Downloader* s) : subject(s) {
        subject->subscribe(this);
    }

    virtual ~GuiDownloader(){
        subject->unsubscribe(this);
    }

    virtual void update() override;

private:
    Downloader* subject;
};


#endif //PROGETTO_GUIDOWNLOADER_H
