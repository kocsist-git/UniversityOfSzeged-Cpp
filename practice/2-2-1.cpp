/* Készíts egy Immunrendszer osztályt, melynek két egész szám adattagja van,
melyek privát láthatóságúak. Az egyik adattag neve vedelem, a másik tamadas.
Lehessen az osztályt default konstruktorral inicializálni, amikor a vedelem
és a tamadas értéke is 10. Lehessen úgy is inicializálni az osztályt,
hogy mindkét adattag értéke paraméterből jön. */

/* Készíts egy Virus osztályt, melynek két privát adattagja van: nev (string) és tamadas (int).
Legyen olyan konstruktora, amivel mindkét adattagot lehet inicializálni és olyan is,
amivel csak a nevet, a tamadas érték pedig ilyenkor legyen 10. */

/* Valósítsd meg a vírus immunrendszer elleni támadását! Legyen az Immunrendszer osztálynak egy
tamadast_elszenved publikus metódusa, melynek egyetlen paramétere egy Vírus objektum.
Ha a vírus támadas értéke nagyobb, mint az immunrendszeré, akkor csökkenjen az immunrendszer védelem értéke eggyel.
A védelem érték ne csökkenjen nulla alá. Ha eléri a nullát vagy az alá akarnánk csökkenteni,
legyen kiírva a standard outputra: "a [vírus neve] gyozott." */

#include <iostream>

using namespace std;

class Virus
{
    string nev;
    int tamadas;

public:
    Virus(string nev)
    {
        this->nev = nev;
        tamadas = 10;
    };
    Virus(string nev, int tamadas)
    {
        this->nev = nev;
        this->tamadas = tamadas;
    };

    int get_tamadas()
    {
        return tamadas;
    }

    string get_nev(){
        return nev;
    }
};

class Immunrendszer
{
    int vedelem;
    int tamadas;

public:
    Immunrendszer()
    {
        vedelem = 10;
        tamadas = 10;
    };
    Immunrendszer(int vedelem, int tamadas)
    {
        this->vedelem = vedelem;
        this->tamadas = tamadas;
    };

    int get_vedelem()
    {
        return vedelem;
    }

    int get_tamadas()
    {
        return tamadas;
    }

    void tamadast_elszenved(Virus &virus)
    {
        if (virus.get_tamadas() > get_tamadas())
        {
            if (get_vedelem()>1)
            {
                vedelem--;
            }else{
                cout << "a " << virus.get_nev() << " gyozott." << endl;
            }
            
        }
    }
};

int main(int argc, char const *argv[])
{
    Immunrendszer im1;
    Immunrendszer im2(1, 5);

    Virus fu("FU");
    Virus covid("COVID", 100);

    cout << "im1: védelem: " << im1.get_vedelem() << " tamadás: " << im1.get_tamadas() << endl;
    cout << "im2: védelem: " << im2.get_vedelem() << " tamadás: " << im2.get_tamadas() << endl;
    
    im2.tamadast_elszenved(covid);

    return 0;
}
