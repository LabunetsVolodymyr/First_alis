//
// Created by Vova on 24.05.2025.
//

#ifndef IPLAYABLE_H
#define IPLAYABLE_H



class IPlayable {
public:
    virtual void play() const = 0;
    virtual ~IPlayable() {}
};



#endif //IPLAYABLE_H
