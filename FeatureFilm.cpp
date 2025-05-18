//
// Created by Vova on 01.04.2025.
//

#include "FeatureFilm.h"
#include <iostream>

FeatureFilm::FeatureFilm(std::string t, int y, double r, std::shared_ptr<Director> d, std::vector<std::shared_ptr<Actor>> a, int dur)
    : Film(t, y, r, d, a), duration(dur) {}

FeatureFilm::FeatureFilm(const FeatureFilm& other)
    : Film(other), duration(other.duration) {}

FeatureFilm::FeatureFilm(FeatureFilm&& other) noexcept
    : Film(std::move(other)), duration(other.duration) {
    other.duration = 0;
}

FeatureFilm& FeatureFilm::operator=(const FeatureFilm& other) {
    if (this != &other) {
        Film::operator=(other);
        duration = other.duration;
    }
    return *this;
}

FeatureFilm::~FeatureFilm() {}

void FeatureFilm::showInfo() const {
    Film::showInfo();
    std::cout << "Duration: " << duration << " minutes" << std::endl;
}
