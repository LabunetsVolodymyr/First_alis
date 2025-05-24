//
// Created by Vova on 10.03.2025.
//

#ifndef FILM_H
#define FILM_H

#include <string>
#include <iostream>
#include "IPlayable.h"

class Film : public IPlayable {
protected:
    std::string title;
    int releaseYear;
    double imdbRating;

public:
    Film();
    Film(std::string t, int y, double r);
    Film(std::string t);
    virtual ~Film();

    virtual void showInfo() const;
    virtual std::string getType() const;
    virtual void play() const override = 0;
};


#endif // FILM_H