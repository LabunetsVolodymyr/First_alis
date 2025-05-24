//
// Created by Vova on 10.03.2025.
//

#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <string>
#include <iostream>

class Director {
private:
    std::string name;
    int experience;

public:
    Director();
    Director(std::string n, int exp);
    Director(std::string n);
    ~Director();

    void showInfo() const;
};


#endif// DIRECTOR_H
