#ifndef SET_H
#define SET_H

#include "Player.h"

class Set {
    Player player1;
    Player player2;

public:
    Set(const std::string& name1, const std::string& name2);
    void playSet();
};

#endif // SET_H
