/* Készíts egy SIMKartya osztályt.
A SIM kártyának meg kell adni a számát létrehozáskor, amit később nem lehet megváltoztatni.
Bárki lekérdezheti a számát. */

#include <iostream>

using namespace std;

class SIMKartya
{
private:
    const string number;

public:
    SIMKartya(const string number) : number(number){};

    string get_number()
    {
        return number;
    }
};

int main(int argc, char const *argv[])
{
    SIMKartya sim1("023256342");

    cout << "A kártya száma: " << sim1.get_number() << endl;

    return 0;
}
