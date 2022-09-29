/*
    Írjunk egy olyan programot, ami a
    programunk argumentumait összeadja és
    kiírja az eredményt a képernyőre.
*/
#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int sum = 0;
    for (int i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]);
    }
    cout << sum << endl;
    return 0;
}
