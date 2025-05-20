//
// Created by Vova on 01.04.2025.
//

#ifndef SHORTFILM_H
#define SHORTFILM_H

#include "MediaItem.h"
#include <string>

class ShortFilm : public MediaItem {
private:
    std::string festival;

public:
    ShortFilm();
    ShortFilm(const std::string& t, int y, double r, const std::string& fest);
    ~ShortFilm() override;

    void showInfo() const override;
    std::string getType() const override;
};


#endif //SHORTFILM_H
