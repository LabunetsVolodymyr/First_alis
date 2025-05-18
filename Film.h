//
// Created by Vova on 10.03.2025.
//

#ifndef FILM_H
#define FILM_H

#include "MediaItem.h"
#include "Director.h"
#include "Studio.h"

class Film : public MediaItem {
protected:
    float rating;
    Director director;
    Studio studio;

public:
    Film(const char* t = "Untitled", int y = 2000, float r = 0.0f,
         const Director& d = Director(), const Studio& s = Studio());

    Film(const Film& other);
    Film(Film&& other) noexcept;
    Film& operator=(const Film& other);

    ~Film();

    void show() const override;
};
#endif// FILM_H
