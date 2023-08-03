#include <string>
#include "Rock.h"


Rock::Rock() {
    name = "Rock";
}
std::string Rock::getName() {
    return name;
}

bool Rock::beats(Move* otherMove) {
    if (otherMove->getName() == "Scissors") 
        return true;
    return false;
}