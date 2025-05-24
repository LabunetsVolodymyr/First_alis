//
// Created by Vova on 10.03.2025.
//

#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include <iostream>
#include "IPlayable.h"

class Actor : public IPlayable {
private:
    std::string fullName;
    int age;

public:
    Actor();
    Actor(std::string name, int age);
    Actor(std::string name);
    ~Actor();

    void showInfo() const;
    void play() const override;
};


#endif //ACTOR_H
