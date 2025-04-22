//
// Created by Vova on 10.03.2025.
//

#ifndef FILM_H
#define FILM_H

#include <iostream>
#include <string>
#include "Entity.h"

class Film : public Entity {
private:
    std::string genre;
    int year;
    double rating;
    static int filmCount;
public:
    Film();
    Film(std::string t, std::string g, int y, double r);
    Film(std::string t, std::string g);
    Film(const Film& other);
    Film(Film&& other) noexcept;
    ~Film();

    std::string getGenre() const;
    int getYear() const;
    double getRating() const;
    Film operator+(const Film& other) const;
    Film& operator=(const Film& other);
    bool operator!() const;
    void display() const;
    static int getFilmCount();
    friend std::ostream& operator<<(std::ostream& os, const Film& f);
    friend std::istream& operator>>(std::istream& is, Film& f);
};

#endif // FILM_H
