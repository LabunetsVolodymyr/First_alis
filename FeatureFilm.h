//
// Created by Vova on 01.04.2025.
//

#ifndef FEATUREFILM_H
#define FEATUREFILM_H

#include "Film.h"

class FeatureFilm : public Film {
private:
    int duration;

public:
    FeatureFilm(std::string t, int y, double r, std::shared_ptr<Director> d, std::vector<std::shared_ptr<Actor>> a, int dur);
    FeatureFilm(const FeatureFilm& other);
    FeatureFilm(FeatureFilm&& other) noexcept;
    FeatureFilm& operator=(const FeatureFilm& other);
    ~FeatureFilm();

    void showInfo() const;
};

#endif //FEATUREFILM_H
