//
// Created by Vova on 01.04.2025.
//

#include "MediaItem.h"
#include <iostream>

MediaItem::MediaItem() : title("Untitled"), releaseYear(2000) {}
MediaItem::MediaItem(std::string t, int y) : title(t), releaseYear(y) {}
MediaItem::~MediaItem() {
    std::cout << "MediaItem \"" << title << "\" destroyed\n";
}
void MediaItem::showInfo() const {
    std::cout << "Media Title: " << title << ", Year: " << releaseYear << std::endl;
}