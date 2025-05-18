//
// Created by Vova on 01.04.2025.
//

#ifndef MEDIAITEM_H
#define MEDIAITEM_H

#include <string>

class MediaItem {
protected:
    std::string title;
    int releaseYear;

public:
    MediaItem();
    MediaItem(std::string t, int y);
    ~MediaItem();
    void showInfo() const;
};

#endif //MEDIAITEM_H
