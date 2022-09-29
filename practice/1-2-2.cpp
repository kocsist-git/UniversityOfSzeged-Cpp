/*
   Írjunk egy programot, ami bekér két egész számot,
   majd kiírja az összegüket majd egy sorvége jelet
   a következő formában: A {szám1} es {szam2} osszege: {összeg}
*/
#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int num1;
    int num2;

    cout << "Adj meg egy egész számot: ";
    cin >> num1;
    cout << "Adj meg egy másik egész számot: ";
    cin >> num2;

    cout << "A " << num1 << " es " << num2 << " osszege: " << (num1 + num2) << endl;
    return 0;
}
