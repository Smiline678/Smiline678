#include "Player.h"
#include "Move.h"
#include <string>

class Human : public Player {
public:
    Human(const std::string& name = "Human");
    Move* makeMove();
    std::string getName();

private:
    std::string name;
};