//
// Created by Vova on 22.04.2025.
//

#ifndef ENTITY_H
#define ENTITY_H
#include <string>

class Entity {
protected:
    std::string name;
public:
    Entity(const std::string& name = "Unknown") : name(name) {}
    virtual ~Entity() {}
    std::string getName() const { return name; }
};
#endif //ENTITY_H
