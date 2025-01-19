#ifndef GAME_H
#define GAME_H

#include <iostream>

class Game {
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

public:
    Game(int maxNumber);
    void play();
    void printGameResult() const;
};

#endif
