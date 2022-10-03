/* Írjunk programot, mely bekér 2 stringet és 2 számot
(lehetséges értékek: 2,8,10,16)! A program a 2 stringet
rendre a 2 bekért szám szerinti számrendszerben vett számként
értelmezze és váltsa át azokat tízes számrendszerbeli számmá!
(megj.: a konvertáló függvények átnézése a referencia oldalakon!) */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeralSystem1 = 0;
    int numeralSystem2 = 0;
    string workNumber1;
    string workNumber2;

    int decimal1;
    int decimal2;

    cout << "Milyen számrendszerben adod meg az értéket?" << endl
         << "(lehetséges értékek: 2,8,10,16)" << endl
         << "Érték: ";
    cin >> numeralSystem1;
    cout << "Add meg az értéket értéket a következő számrendszerbe: " << numeralSystem1 << endl
         << "Érték: ";
    cin >> workNumber1;
    cout << "2. Milyen számrendszerben adod meg az értéket?" << endl
         << "(lehetséges értékek: 2,8,10,16)" << endl
         << "Érték: ";
    cin >> numeralSystem2;
    cout << "Add meg az értéket értéket a következő számrendszerbe: " << numeralSystem2 << endl
         << "Érték: ";
    cin >> workNumber2;

    decimal1 = stoi(workNumber1, nullptr, numeralSystem1);
    decimal2 = stoi(workNumber2, nullptr, numeralSystem2);

    cout << decimal1 << endl;
    cout << decimal2 << endl;

    return 0;
}
