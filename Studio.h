//
// Created by Vova on 10.03.2025.
//

#ifndef STUDIO_H
#define STUDIO_H

#include <iostream>
using namespace std;

class Studio {
private:
    char name[50];
    char country[30];

public:
    Studio(const char* n = "Unknown Studio", const char* c = "Unknown Country");
    Studio(const Studio& other);
    Studio& operator=(const Studio& other);
    ~Studio();

    void show() const;
};
#endif // STUDIO_H