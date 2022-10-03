/* Mutassuk be ugyanezt a cserét referencia használattal.
Mi változott? Vizsgáljuk meg a használat és a hívás helyét is.*/

#include <iostream>

using namespace std;



class SIMKartya
{
private:
    string number;

public:
    SIMKartya(string number) : number(number){};

    string get_number()
    {
        return number;
    }

    friend class Szolgaltato;
};

class Szolgaltato
{
public:
    void change_number(SIMKartya& sim, const string& newNumber){
        sim.number = newNumber;
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

void shift_sim(Mobiltelefon &telefon, SIMKartya &newsim)
{
    telefon.add_sim(&newsim);
    cout << "A kártya száma: (shift_sim)" << telefon.get_number() << endl;
}

int main(int argc, char const *argv[])
{
    SIMKartya sim1("06-70/358-75-85");
    SIMKartya sim2("06-30/111-23-92");
    Mobiltelefon telefon1;

    telefon1.add_sim(&sim1);
    cout << "A kártya száma: " << telefon1.get_number() << endl;

    shift_sim(telefon1, sim2);
    cout << "A kártya száma: " << telefon1.get_number() << endl;

    Szolgaltato szolgaltato;
    szolgaltato.change_number(sim2, "06-20/123-45-65");
    cout << "A kártya száma: (szolgaltato utan)" << telefon1.get_number() << endl;
    return 0;
}
