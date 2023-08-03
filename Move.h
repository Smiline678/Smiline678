#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move{
    protected: 
    std::string name;
    public:
    virtual std::string getName() = 0;
    virtual bool beats(Move* otherMove) = 0;
};
#endif