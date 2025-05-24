//
// Created by Vova on 01.04.2025.
//

#ifndef SHORTFILM_H
#define SHORTFILM_H

#include "Film.h"

class ShortFilm : public Film {
public:
    ShortFilm(std::string t, int y, double r);
    void showInfo() const override;
    std::string getType() const override;
    void play() const override;
};



#endif //SHORTFILM_H
