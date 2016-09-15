//
// Created by giovanni on 15/09/16.
//

#ifndef PROGETTO_SUBJECT_H
#define PROGETTO_SUBJECT_H

#include "Observer.h"

class Subject {
    virtual void subscribe(Observer* o)=0;
    virtual void unsubscribe(Observer* o)=0;
    virtual void notify()=0;
};

#endif //PROGETTO_SUBJECT_H
