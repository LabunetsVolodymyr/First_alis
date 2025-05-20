//
// Created by Vova on 01.04.2025.
//

#include "MediaItem.h"

MediaItem::MediaItem() : title("Unknown"), releaseYear(2000), imdbRating(0.0) {}

MediaItem::MediaItem(const std::string& t, int y, double r) : title(t), releaseYear(y), imdbRating(r) {}

MediaItem::~MediaItem() {
    std::cout << "MediaItem \"" << title << "\" deleted\n";
}

void MediaItem::showInfo() const {
    std::cout << "Title: " << title << ", Year: " << releaseYear << ", IMDb: " << imdbRating << std::endl;
}
