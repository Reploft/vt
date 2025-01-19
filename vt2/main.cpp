#include "Game.h"
using namespace std;
int main() {
    int maxNumber;
    cout << "Anna suurin mahdollinen etsittava luku: ";
    cin >> maxNumber;

    Game peli(maxNumber);
    peli.play();
    peli.printGameResult();

    return 0;
}
