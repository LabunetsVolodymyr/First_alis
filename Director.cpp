//
// Created by Vova on 10.03.2025.
//

#include "Director.h"
#include <iostream>

Director::Director(const char* n, int y) : Person(n), birthYear(y) {}

Director::Director(const Director& other) : Person(other), birthYear(other.birthYear) {}

Director& Director::operator=(const Director& other) {
    if (this != &other) {
        Person::operator=(other);
        birthYear = other.birthYear;
    }
    return *this;
}

Director::~Director() {
    cout << "Destroying Director: " << name << endl;
}

void Director::show() const {
    cout << "Director: " << name << ", Born: " << birthYear << endl;
}

