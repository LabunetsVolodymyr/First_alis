//
// Created by Vova on 01.04.2025.
//

#include "ShortFilm.h"
#include <iostream>

ShortFilm::ShortFilm(std::string t, int y, double r, std::shared_ptr<Director> d, std::vector<std::shared_ptr<Actor>> a, bool anim)
    : Film(t, y, r, d, a), isAnimated(anim) {}

void ShortFilm::showInfo() const {
    Film::showInfo();
    std::cout << "Type: " << (isAnimated ? "Animated" : "Live Action") << std::endl;
}
