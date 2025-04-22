//
// Created by Vova on 10.03.2025.
//

#include "Director.h"
#include <iostream>

Director::Director(const std::string& name, const std::string& birthdate)
    : Person(name, birthdate) {}

Director::Director(const Director& other)
    : Person(other) {
    for (const auto& film : other.films) {
        films.push_back(new Film(*film));
    }
}

Director::Director(Director&& other) noexcept
    : Person(std::move(other)), films(std::move(other.films)) {
    other.films.clear();
}

Director::~Director() {
    for (auto film : films) {
        delete film;
    }
    std::cout << "Director " << name << " has been deleted.\n";
}

void Director::addFilm(Film* f) {
    films.push_back(f);
}

void Director::display() const {
    std::cout << "Director: " << name << ", Birthdate: " << birthdate << "\nFilms:\n";
    for (const auto& film : films) {
        film->display();
    }
}
