/* A stringhez kapcsolódó referencia oldalak segítségével írjunk olyan programot,
mely bekér két stringet és a hosszabban megkeresi a rövidebbet! Ha nem található,
írja ki, az alapértelmezett hibacsatornára, hogy "not found"! Ha megtalálta,
írja ki a pozíciót ahol kezdődik! */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    string str2;
    size_t result;

    cout << "Kérek egy szöveget: ";
    getline(cin, str);
    cout << "Kérek egy másik szöveget: ";
    getline(cin, str2);

    if (str.length() > str2.length())
    {
        result = str.find(str2);
    }
    else
    {
        result = str2.find(str);
    }

    if (result != string::npos)
    {
        cout << "Itt kezdődik a rövidebb szöveg: " << result << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}
