//
// Created by Vova on 01.04.2025.
//

#ifndef FEATUREFILM_H
#define FEATUREFILM_H

#include "Film.h"

class FeatureFilm final : public Film {
public:
    FeatureFilm(std::string t, int y, double r);
    void showInfo() const override final;
    std::string getType() const override;
    void play() const override;
    void nonVirtualMethod() const{
        std::cout << "FeatureFilm::nonVirtualMethod() called for \"" << title << "\"\n";
    }
};



#endif //FEATUREFILM_H
