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

void Downloader::downloadFile() {
    notify();
    files.pop_front();
}

void Downloader::addFile(std::string file) {
    files.push_back(file);

}

int Downloader::getNumFiles() const {
    return files.size();
}
