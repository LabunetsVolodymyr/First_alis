//
// Created by Vova on 18.05.2025.
//

#ifndef MEDIAITEM_H
#define MEDIAITEM_H

#include <iostream>
using namespace std;

class MediaItem {
protected:
    char title[50];
    int year;

public:
    MediaItem(const char* t = "Untitled", int y = 2000);
    MediaItem(const MediaItem& other);
    MediaItem& operator=(const MediaItem& other);
    virtual ~MediaItem();

    virtual void show() const;
};
#endif //MEDIAITEM_H
