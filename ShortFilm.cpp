//
// Created by Vova on 18.05.2025.
//

#include "ShortFilm.h"
#include <iostream>

ShortFilm::ShortFilm(const char* t, int y, float r,
                     const Director& d, const Studio& s)
    : Film(t, y, r, d, s) {}

void ShortFilm::show() const {
    cout << "[Short Film] ";
    Film::show();
}
