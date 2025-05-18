//
// Created by Vova on 10.03.2025.
//


#include "Film.h"
#include <iostream>

Film::Film() : MediaItem(), imdbRating(0.0), director(std::make_shared<Director>()), actors() {}

Film::Film(std::string t, int y, double r, std::shared_ptr<Director> d, std::vector<std::shared_ptr<Actor>> a)
    : MediaItem(t, y), imdbRating(r), director(d), actors(a) {}

Film::Film(std::string t) : Film(t, 2024, 5.0, std::make_shared<Director>(), {}) {}

Film::~Film() {
    std::cout << "Film \"" << title << "\" deleted\n";
}

void Film::showInfo() const {
    MediaItem::showInfo();
    std::cout << "IMDb Rating: " << imdbRating << std::endl;
    director->showInfo();
    for (const auto& actor : actors) {
        actor->showInfo();
    }
}
