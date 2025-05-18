//
// Created by Vova on 10.03.2025.
//

#ifndef ACTOR_H
#define ACTOR_H

#include <string>

class Actor {
private:
    std::string fullName;
    int age;

public:
    Actor();
    Actor(std::string name, int age);
    Actor(std::string name);
    ~Actor();

    void showInfo() const;
};




#endif //ACTOR_H
