/* A referencia oldalak segítségével írjunk olyan programot,
mely a legjobboldalabbi 'b' betű pozícióját írja ki egy bekért szövegben! Nézzük meg,
mit kapunk, ha nem található 'b' betű a szövegben! */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    size_t result;

    cout << "Kérek egy szöveget: ";
    getline(cin, str);

    result = str.find_last_of("b");

    cout << "Az utolso 'b' pozicioja: " << result << endl;

    return 0;
}