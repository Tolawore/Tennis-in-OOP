#include "Player.h"

Player::Player(const std::string& n) : name(n), score(0), gamesWon(0) {}

void Player::winPoint() {
    score += score < 30 ? 15 : 10; 
}

void Player::winGame() {
    gamesWon++;
    resetScore();
}

void Player::resetScore() {
    score = 0;
}
