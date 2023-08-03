#ifndef ROCK_H
#define ROCK_H
#include <string>
#include "Move.h"

class Rock: public Move {
    public:
    Rock();
    std::string name;
    std::string getName();
    bool beats(Move* otherMove);
};

#endif