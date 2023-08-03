#include "Computer.h"
#include "Move.h"

Computer::Computer() {}

Move* Computer::makeMove() {
    return this->"R"; 
}

std::string Computer::getName() {
    return "Computer";
}