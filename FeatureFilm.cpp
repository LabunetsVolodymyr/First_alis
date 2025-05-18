//
// Created by Vova on 18.05.2025.
//

#include "FeatureFilm.h"
#include <iostream>

FeatureFilm::FeatureFilm(const char* t, int y, float r,
                         const Director& d, const Studio& s)
    : Film(t, y, r, d, s) {}

void FeatureFilm::show() const {
    cout << "[Feature Film] ";
    Film::show();
}
