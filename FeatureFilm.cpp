//
// Created by Vova on 01.04.2025.
//

#include "FeatureFilm.h"

FeatureFilm::FeatureFilm(std::string t, int y, double r) : Film(t, y, r) {}

void FeatureFilm::showInfo() const {
    std::cout << "[Feature Film] ";
    Film::showInfo();
}

std::string FeatureFilm::getType() const {
    return "Feature Film";
}

void FeatureFilm::play() const {
    std::cout << "Playing full-length movie: " << title << std::endl;
}

