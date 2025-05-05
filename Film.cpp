//
// Created by Vova on 10.03.2025.
//

#include "Film.h"

int Film::filmCount = 0;

Film::Film() : Entity("Unknown"), genre("Unknown"), year(0), rating(0.0) {
    filmCount++;
}

Film::Film(std::string t, std::string g, int y, double r)
    : Entity(t), genre(g), year(y), rating(r) {
    filmCount++;
}

Film::Film(std::string t, std::string g)
    : Film(t, g, 2000, 5.0) {}

Film::Film(const Film& other)
    : Entity(other.name), genre(other.genre), year(other.year), rating(other.rating) {
    filmCount++;
}

Film::Film(Film&& other) noexcept
    : Entity(std::move(other.name)), genre(std::move(other.genre)), year(other.year), rating(other.rating) {
    other.year = 0;
    other.rating = 0.0;
}

Film::~Film() {
    filmCount--;
    std::cout << "Film \"" << name << "\" has been deleted.\n";
}

std::string Film::getGenre() const { return genre; }
int Film::getYear() const { return year; }
double Film::getRating() const { return rating; }

Film Film::operator+(const Film& other) const {
    return Film(name + " & " + other.name, genre, (year + other.year) / 2, (rating + other.rating) / 2);
}

Film& Film::operator=(const Film& other) {
    if (this != &other) {
        name = other.name;
        genre = other.genre;
        year = other.year;
        rating = other.rating;
    }
    return *this;
}

bool Film::operator!() const {
    return rating < 5.0;
}

void Film::display() const {
    std::cout << "Title: " << name << ", Genre: " << genre << ", Year: " << year << ", Rating: " << rating << std::endl;
}

int Film::getFilmCount() {
    return filmCount;
}

std::ostream& operator<<(std::ostream& os, const Film& f) {
    os << f.name << " (" << f.year << ") - " << f.genre << ", Rating: " << f.rating;
    return os;
}

std::istream& operator>>(std::istream& is, Film& f) {
    std::cout << "Enter title: ";
    is >> f.name;
    std::cout << "Enter genre: ";
    is >> f.genre;
    std::cout << "Enter year: ";
    is >> f.year;
    std::cout << "Enter rating: ";
    is >> f.rating;
    return is;
}