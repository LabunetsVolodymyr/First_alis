//
// Created by Vova on 01.04.2025.
//

#include "FeatureFilm.h"
#include <iostream>

FeatureFilm::FeatureFilm() : duration(90) {}

FeatureFilm::FeatureFilm(const std::string& t, int y, double r, int d) : MediaItem(t, y, r), duration(d) {}

FeatureFilm::~FeatureFilm() {
    std::cout << "FeatureFilm \"" << title << "\" deleted\n";
}

void FeatureFilm::showInfo() const {
    MediaItem::showInfo();
    std::cout << "Duration: " << duration << " minutes" << std::endl;
}

std::string FeatureFilm::getType() const {
    return "Feature Film";
}
