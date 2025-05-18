//
// Created by Vova on 18.05.2025.
//

#include "MediaItem.h"
#include <cstring>

MediaItem::MediaItem(const char* t, int y) : year(y) {
    strncpy(title, t, sizeof(title) - 1);
    title[sizeof(title) - 1] = '\0';
}

MediaItem::MediaItem(const MediaItem& other) : year(other.year) {
    strncpy(title, other.title, sizeof(title));
}

MediaItem& MediaItem::operator=(const MediaItem& other) {
    if (this != &other) {
        strncpy(title, other.title, sizeof(title));
        year = other.year;
    }
    return *this;
}

MediaItem::~MediaItem() {
    cout << "Destroying MediaItem: " << title << endl;
}

void MediaItem::show() const {
    cout << "Title: " << title << ", Year: " << year << endl;
}

