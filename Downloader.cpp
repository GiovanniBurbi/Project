//
// Created by giovanni on 15/09/16.
//

#include "Downloader.h"

void Downloader::subscribe(Observer *o) {
    observers.push_back(o);

}

void Downloader::unsubscribe(Observer *o) {
    observers.push_back(o);

}

void Downloader::notify() {
    for(auto i=observers.begin();i!=observers.end();i++)
        (*i)->update();

}

void Downloader::downloadFiles() {
    notify();
    files.pop_front();
}

void Downloader::addFile(std::string file) {
    files.push_back(file);

}

unsigned long int Downloader::getNumFiles() const {
    return files.size();
}
