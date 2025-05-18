//
// Created by Vova on 18.05.2025.
//

#ifndef FEATUREFILM_H
#define FEATUREFILM_H

#include "Film.h"

class FeatureFilm : public Film {
public:
    FeatureFilm(const char* t, int y, float r,
                const Director& d = Director(), const Studio& s = Studio());

    void show() const override;
};

#endif //FEATUREFILM_H
