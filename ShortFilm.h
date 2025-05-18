//
// Created by Vova on 18.05.2025.
//

#ifndef SHORTFILM_H
#define SHORTFILM_H

#include "Film.h"

class ShortFilm : public Film {
public:
    ShortFilm(const char* t, int y, float r,
              const Director& d = Director(), const Studio& s = Studio());

    void show() const override;
};



#endif //SHORTFILM_H
