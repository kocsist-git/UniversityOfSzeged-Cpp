/* Készíts egy Mobiltelefon osztályt.
A Mobiltelefonba be lehessen rakni egy SIM kártyát.
Milyen kapcsolat van a mobiltelefon és a kártya között?
Ki lehessen cserélni a kártyát.
Ki lehessen venni a kártyát. */

#include <iostream>

using namespace std;

class Mobiltelefon
{
private:
    SIMKartya sim;
public:
    Mobiltelefon(SIMKartya sim) : sim(sim) {};

    const void add_sim(const SIMKartya& sim)
    {
       // this->sim = sim;
    };
};

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
