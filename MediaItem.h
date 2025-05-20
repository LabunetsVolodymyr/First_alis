//
// Created by Vova on 01.04.2025.
//

#ifndef MEDIAITEM_H
#define MEDIAITEM_H

#include <string>
#include <iostream>

class MediaItem {
protected:
    std::string title;
    int releaseYear;
    double imdbRating;

public:
    MediaItem();
    MediaItem(const std::string& t, int y, double r);
    virtual ~MediaItem();

    virtual void showInfo() const;
    virtual std::string getType() const = 0;
};


#endif //MEDIAITEM_H
