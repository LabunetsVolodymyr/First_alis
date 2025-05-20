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
    Director(const std::string& n, int exp);
    Director(const std::string& n);
    ~Director();

    void showInfo() const;
};

#endif// DIRECTOR_H
