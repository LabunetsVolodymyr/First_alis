//
// Created by Vova on 10.03.2025.
//

#include "Studio.h"
#include <iostream>

Studio::Studio(const std::string& name, int year) : Entity(name), yearFounded(year) {}

Studio::Studio(const Studio& other)
    : Entity(other), yearFounded(other.yearFounded) {
    for (const auto& film : other.films) {
        films.push_back(new Film(*film));
    }
}

Studio::Studio(Studio&& other) noexcept
    : Entity(std::move(other)), yearFounded(other.yearFounded), films(std::move(other.films)) {
    other.films.clear();
}

Studio::~Studio() {
    for (auto film : films) {
        delete film;
    }
    std::cout << "Studio " << name << " has been deleted.\n";
}

void Studio::addFilm(Film* f) {
    films.push_back(f);
}

void Studio::display() const {
    std::cout << "Studio: " << name << ", Founded in " << yearFounded << "\nFilms:\n";
    for (const auto& film : films) {
        film->display();
    }
}
