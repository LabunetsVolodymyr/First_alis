//
// Created by Vova on 01.04.2025.
//

#include "ShortFilm.h"

ShortFilm::ShortFilm(std::string t, int y, double r) : Film(t, y, r) {}

void ShortFilm::showInfo() const {
    std::cout << "[Short Film] ";
    Film::showInfo();
}

std::string ShortFilm::getType() const {
    return "Short Film";
}

void ShortFilm::play() const {
    std::cout << "Playing short film: " << title << std::endl;
}


