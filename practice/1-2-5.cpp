/* Írjunk egy programot, mely egészeket kér be a -1 jelzőértékig
(csak ezzel lép ki) s eldönti, hogy páros vagy páratlan-e a szám!
Próbáljuk ki a programot negatív páros és páratlan számokkal is! */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    while (true)
    {
        int number = 0;

        cout << "Adj meg egy egész számot: ";
        cin >> number;

        if (number != -1)
        {
            if (number % 2 == 0)
            {
                cout << "A szám páros" << endl;
            }
            else
            {
                cout << "A szám páratlan" << endl;
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}