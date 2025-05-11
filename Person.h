//
// Created by Vova on 22.04.2025.
//

#ifndef PERSON_H
#define PERSON_H
#include "Entity.h"

class Person : public Entity {
protected:
    std::string birthdate;
public:
    Person(const std::string& name = "Unknown", const std::string& birthdate = "01.01.1970")
        : Entity(name), birthdate(birthdate) {}
    ~Person() {}
    std::string getBirthdate() const { return birthdate; }
};

#endif // PERSON_H
