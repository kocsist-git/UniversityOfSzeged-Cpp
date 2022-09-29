/* Írjunk egy programot, mely beolvas egy stringet és egy számot.
Írja ki a string elemeit a kapott indextől!
Ha az index nem valid, írja ki, az alapértelmezett
hiba csatornára, hogy ,,invalid index''! */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    int number;

    cout << "Kérek egy szöveget: ";
    getline(cin, str);
    cout << "Kérek egy számot: ";
    cin >> number;

    cout << str.substr(number) << endl;

    return 0;
}
