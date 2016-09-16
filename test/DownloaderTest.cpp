//
// Created by giovanni on 16/09/16.
//
#include <gtest/gtest.h>
#include "../Downloader.h"


TEST(Downloader, TestaddFiles){
    Downloader dload;
    dload.addFile("testfile");
    dload.addFile("testfile2");
    ASSERT_EQ(2, dload.getNumFiles());
}

TEST(Downloader, TestDownload){
    Downloader dload;
    dload.addFile("testfile");
    dload.downloadFiles();
    ASSERT_EQ(0, dload.getNumFiles());

}

