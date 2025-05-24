//
// Created by Vova on 10.03.2025.
//

#include "Film.h"

Film::Film() : title("Unknown"), releaseYear(2000), imdbRating(0.0) {}
Film::Film(std::string t, int y, double r) : title(t), releaseYear(y), imdbRating(r) {}
Film::Film(std::string t) : Film(t, 2024, 5.0) {}

Film::~Film() {
    std::cout << "Film \"" << title << "\" deleted\n";
}

void Film::showInfo() const {
    std::cout << "Film: " << title << ", Year: " << releaseYear << ", IMDb: " << imdbRating << std::endl;
}

std::string Film::getType() const {
    return "Generic Film";
}

