#include "Human.h"
#include "Move.h"
#include <iostream>

Human::Human(const std::string& name): name(name) {}

Move* Human::makeMove() {
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return this->move;
}

std::string Human::getName() {
    return name;
}