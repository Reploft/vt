#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum) {
    srand(time(0));

    int oikea_luku = rand() % maxnum + 1;
    int arvausten_maara = 0;

    cout << "Arvaa kokonaisluku valilta 1-" << maxnum << "." << endl;

    while (true) {
        int arvaus;
        cout << "Anna arvauksesi: ";

        cin >> arvaus;
        arvausten_maara++;

        if (arvaus < oikea_luku) {
            cout << "Luku on suurempi. " << endl;
        } else if (arvaus > oikea_luku) {
            cout << "Luku on pienempi. " << endl;
        } else {
            cout << "Oikea vastaus!" << endl;
            break;
        }
    }

    return arvausten_maara;
}

int main() {
    int maxnum;
    cout << "Anna suurin mahdollinen etsittava luku: ";
    cin >> maxnum;

    int arvausten_maara = game(maxnum);

    cout << "Peli paattyi. Arvauksia tehtiin: " << arvausten_maara << endl;

    return 0;
}
