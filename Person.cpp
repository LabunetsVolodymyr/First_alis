//
// Created by Vova on 22.04.2025.
//

#include "Person.h"
#include <cstring>

Person::Person(const char* n) {
    strncpy(name, n, sizeof(name) - 1);
    name[sizeof(name) - 1] = '\0';
}

Person::Person(const Person& other) {
    strncpy(name, other.name, sizeof(name));
}

Person& Person::operator=(const Person& other) {
    if (this != &other) {
        strncpy(name, other.name, sizeof(name));
    }
    return *this;
}

Person::~Person() {
    cout << "Destroying Person: " << name << endl;
}

void Person::show() const {
    cout << "Person: " << name << endl;
}