/* Valósítsuk meg a cserét pointer segítségével.
Mi történik, ha a kártyát nem pointerként adjuk át?*/

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

void shift_sim(Mobiltelefon *telefon, SIMKartya newsim)
{
    telefon->add_sim(&newsim);
    cout << "A kártya száma: (shift_sim)" << telefon->get_number() << endl;
}

int main(int argc, char const *argv[])
{
    SIMKartya sim1("06-70/358-75-85");
    SIMKartya sim2("06-30/111-23-92");
    Mobiltelefon telefon1;

    telefon1.add_sim(&sim1);
    cout << "A kártya száma: " << telefon1.get_number() << endl;

    shift_sim(&telefon1, sim2);
    cout << "A kártya száma: " << telefon1.get_number() << endl;

    return 0;
}
