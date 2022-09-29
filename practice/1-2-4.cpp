/* Írjunk egy programot, mely egész számokat olvas be amíg nem a
42 értéket adjuk meg! A 42-s érték
kivételével minden bevitt értéket írjon is ki a képernyőre! */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num = 0;

    while (true)
    {
        cout << "Adj meg egy egész számot: ";
        cin >> num;
        if (num != 42)
        {
            cout << "A szám, amit megadtál: " << num << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}
