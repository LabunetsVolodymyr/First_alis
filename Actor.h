//
// Created by Vova on 10.03.2025.
//

#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include <iostream>

class Actor {
private:
    std::string fullName;
    int age;

public:
    Actor();
    Actor(const std::string& name, int age);
    Actor(const std::string& name);
    ~Actor();

    void showInfo() const;
};




#endif //ACTOR_H
