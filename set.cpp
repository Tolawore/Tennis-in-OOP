#include "Set.h"
#include "Utility.h"
#include <iostream>

Set::Set(const std::string& name1, const std::string& name2) : player1(name1), player2(name2) {}

void Set::playSet() {
    initializeRandomness(); // Ensuring randomness has started once per set

    while (player1.gamesWon < 6 && player2.gamesWon < 6) {
        Player* pointWinner = randomBetween(0, 1) ? &player1 : &player2;
        pointWinner->winPoint();

        // Display current score
        std::cout << player1.name << ": " << player1.score << "        " << player2.name << ": " << player2.score << std::endl;

        if (pointWinner->score == 45) { // Winner of the game
            pointWinner->winGame();
            std::cout << "The winner of the game is " << pointWinner->name << "!\n\n";
            player1.resetScore();
            player2.resetScore();
        }

        // Display set score
        std::cout << "Set Score:\n" << player1.name << ": " << player1.gamesWon << "\n" << player2.name << ": " << player2.gamesWon << "\n\n";
    }

    // Determine and say set winner
    std::string setWinner = (player1.gamesWon > player2.gamesWon) ? player1.name : player2.name;
    std::cout << "The winner of the set is " << setWinner << "!\n";
}
