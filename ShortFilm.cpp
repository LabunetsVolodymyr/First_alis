//
// Created by Vova on 01.04.2025.
//

#include "ShortFilm.h"
#include <iostream>

ShortFilm::ShortFilm() :  festival("Unknown Festival") {}

ShortFilm::ShortFilm(const std::string& t, int y, double r, const std::string& fest) : MediaItem(t, y, r), festival(fest) {}

ShortFilm::~ShortFilm() {
    std::cout << "ShortFilm \"" << title << "\" deleted\n";
}

void ShortFilm::showInfo() const {
    MediaItem::showInfo();
    std::cout << "Festival: " << festival << std::endl;
}

std::string ShortFilm::getType() const {
    return "Short Film";
}

