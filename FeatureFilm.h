//
// Created by Vova on 01.04.2025.
//

#ifndef FEATUREFILM_H
#define FEATUREFILM_H

#include "MediaItem.h"
#include <string>

class FeatureFilm : public MediaItem {
private:
    int duration;

public:
    FeatureFilm();
    FeatureFilm(const std::string& t, int y, double r, int d);
    ~FeatureFilm() override;

    void showInfo() const override;
    std::string getType() const final;
};

#endif //FEATUREFILM_H
