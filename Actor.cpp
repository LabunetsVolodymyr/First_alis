//
// Created by Vova on 10.03.2025.
//

#include "Actor.h"

Actor::Actor() : fullName("Unknown Actor"), age(30) {}
Actor::Actor(std::string name, int age) : fullName(name), age(age) {}
Actor::Actor(std::string name) : Actor(name, 35) {}

Actor::~Actor() {
    std::cout << "Actor \"" << fullName << "\" deleted\n";
}

void Actor::showInfo() const {
    std::cout << "Actor: " << fullName << ", Age: " << age << std::endl;
}

void Actor::play() const {
    std::cout << "Actor " << fullName << " is performing a scene." << std::endl;
}

