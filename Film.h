//
// Created by Vova on 10.03.2025.
//

#ifndef FILM_H
#define FILM_H

#include "MediaItem.h"
#include "Director.h"
#include "Actor.h"
#include <vector>
#include <memory>

class Film : public MediaItem {
protected:
    double imdbRating;
    std::shared_ptr<Director> director;
    std::vector<std::shared_ptr<Actor>> actors;

public:
    Film();
    Film(std::string t, int y, double r, std::shared_ptr<Director> d, std::vector<std::shared_ptr<Actor>> a);
    Film(std::string t);
    ~Film();

    void showInfo() const;
};


#endif// FILM_H
