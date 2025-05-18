//
// Created by Vova on 10.03.2025.
//

#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Person.h"

class Director : public Person {
    int birthYear;

public:
    Director(const char* n = "Unnamed", int y = 1900);
    Director(const Director& other);
    Director& operator=(const Director& other);
    ~Director();

    void show() const override;
};
#endif// DIRECTOR_H
