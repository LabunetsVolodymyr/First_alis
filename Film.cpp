//
// Created by Vova on 10.03.2025.
//


#include "Film.h"
#include <utility>

Film::Film(const char* t, int y, float r, const Director& d, const Studio& s)
    : MediaItem(t, y), rating(r), director(d), studio(s) {}

Film::Film(const Film& other)
    : MediaItem(other), rating(other.rating), director(other.director), studio(other.studio) {}

Film::Film(Film&& other) noexcept
    : MediaItem(other), rating(other.rating), director(std::move(other.director)), studio(std::move(other.studio)) {}

Film& Film::operator=(const Film& other) {
    if (this != &other) {
        MediaItem::operator=(other);
        rating = other.rating;
        director = other.director;
        studio = other.studio;
    }
    return *this;
}

Film::~Film() {
    cout << "Destroying Film: " << title << endl;
}

void Film::show() const {
    MediaItem::show();
    cout << "Rating: " << rating << "/10" << endl;
    director.show();
    studio.show();
}
