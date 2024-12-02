#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    std::string name;
    int score;
    int gamesWon;

    Player(const std::string& n);
    void winPoint();
    void winGame();
    void resetScore();
};

#endif // PLAYER_H
