//
// Created by Vova on 10.03.2025.
//

#include "Director.h"
#include <iostream>

Director::Director() : name("Unnamed"), experience(0) {}
Director::Director(std::string n, int exp) : name(n), experience(exp) {}
Director::Director(std::string n) : Director(n, 5) {}
Director::~Director() {
    std::cout << "Director \"" << name << "\" deleted\n";
}
void Director::showInfo() const {
    std::cout << "Director: " << name << ", Experience: " << experience << " years" << std::endl;
}
