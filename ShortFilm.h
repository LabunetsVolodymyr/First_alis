//
// Created by Vova on 01.04.2025.
//

#ifndef SHORTFILM_H
#define SHORTFILM_H

#include "Film.h"

class ShortFilm : public Film {
private:
    bool isAnimated;

public:
    ShortFilm(std::string t, int y, double r, std::shared_ptr<Director> d, std::vector<std::shared_ptr<Actor>> a, bool anim);
    void showInfo() const;
};



#endif //SHORTFILM_H
