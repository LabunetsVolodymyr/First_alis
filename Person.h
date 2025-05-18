//
// Created by Vova on 22.04.2025.
//

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
protected:
    char name[50];

public:
    Person(const char* n = "Unnamed");
    Person(const Person& other);
    Person& operator=(const Person& other);
    virtual ~Person();

    virtual void show() const;
};
#endif // PERSON_H
