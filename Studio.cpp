//
// Created by Vova on 10.03.2025.
//

#include "Studio.h"
#include <cstring>

Studio::Studio(const char* n, const char* c) {
    strncpy(name, n, sizeof(name) - 1);
    name[sizeof(name) - 1] = '\0';

    strncpy(country, c, sizeof(country) - 1);
    country[sizeof(country) - 1] = '\0';
}

Studio::Studio(const Studio& other) {
    strncpy(name, other.name, sizeof(name));
    strncpy(country, other.country, sizeof(country));
}

Studio& Studio::operator=(const Studio& other) {
    if (this != &other) {
        strncpy(name, other.name, sizeof(name));
        strncpy(country, other.country, sizeof(country));
    }
    return *this;
}

Studio::~Studio() {
    cout << "Destroying Studio: " << name << endl;
}

void Studio::show() const {
    cout << "Studio: " << name << ", Country: " << country << endl;
}
