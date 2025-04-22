//
// Created by Vova on 10.03.2025.
//

#ifndef STUDIO_H
#define STUDIO_H

#include <vector>
#include "Entity.h"
#include "Film.h"

class Studio : public Entity {
private:
    int yearFounded;
    std::vector<Film*> films;
public:
    Studio(const std::string& name = "Unknown Studio", int year = 1900);
    Studio(const Studio& other);
    Studio(Studio&& other) noexcept;
    ~Studio();
    void addFilm(Film* f);
    void display() const;
};

#endif // STUDIO_H
