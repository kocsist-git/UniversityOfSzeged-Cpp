/* Írjunk programot, mely kideríti [-100;100] -on, hogy melyik
számnak egyezik meg az értéke és a string reprezentáció hossza! */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = -100; i <= 100; i++)
    {
        if (i == (int)to_string(i).length())
        {
            cout << i << " Értéknek megegyezik" << endl;
        }
        else
        {
            cout << i << " " << (int)to_string(i).length() << endl;
        }
    }
    return 0;
}
