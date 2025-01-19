#include "Game.h"
#include <cstdlib>
#include <ctime>

using namespace std;
Game::Game(int maxNumber) : maxNumber(maxNumber), playerGuess(0), numOfGuesses(0) {
    srand(static_cast<unsigned>(time(0)));
    randomNumber = rand() % maxNumber + 1;
}

void Game::play() {
    cout << "Arvaa kokonaisluku valilta 1-" << maxNumber << "." << endl;

    while (true) {
        cout << "Anna arvauksesi: ";
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber) {
            cout << "Luku on suurempi." << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Luku on pienempi." << endl;
        } else {
            cout << "Oikea vastaus!" << endl;
            break;
        }
    }
}

void Game::printGameResult() const {
    cout << "Peli paattyi. Oikea vastaus oli " << randomNumber << "." << endl;
    cout << "Arvauksia tehtiin: " << numOfGuesses << endl;
}
