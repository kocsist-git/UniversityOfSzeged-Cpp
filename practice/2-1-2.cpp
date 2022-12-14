/* Készíts egy Mobiltelefon osztályt.
A Mobiltelefonba be lehessen rakni egy SIM kártyát.
Milyen kapcsolat van a mobiltelefon és a kártya között?
Ki lehessen cserélni a kártyát.
Ki lehessen venni a kártyát. */

#include <iostream>

using namespace std;

class SIMKartya
{
private:
    const string number;

public:
    SIMKartya(string number) : number(number){};

    string get_number()
    {
        return number;
    }
};

class Mobiltelefon
{
private:
    SIMKartya *sim = nullptr;

public:
    void add_sim(SIMKartya *sim1)
    {
        this->sim = sim1;
    };

    void remove_sim()
    {
        sim = nullptr;
    }
    string get_number()
    {
        return this->sim->get_number();
    }
};

int main(int argc, char const *argv[])
{
    SIMKartya sim1("06-70/358-75-85");
    Mobiltelefon telefon1;

    telefon1.add_sim(&sim1);

    cout << "A kártya száma: " << telefon1.get_number() << endl;

    return 0;
}
