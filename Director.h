//
// Created by Vova on 10.03.2025.
//

#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <vector>
#include "Person.h"
#include "Film.h"

class Director : public Person {
private:
    std::vector<Film*> films;
public:
    Director(const std::string& name = "Unknown", const std::string& birthdate = "01.01.1970");
    Director(const Director& other);
    Director(Director&& other) noexcept;
    ~Director();
    void addFilm(Film* f);
    void display() const;
};

#endif // DIRECTOR_H
