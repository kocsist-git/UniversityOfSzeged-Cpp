/* Írjunk programot, mely bekér két stringet és összefűzi azokat úgy,
hogy bekérés sorrendjétől függetlenül mindig a hosszabb kerül előre
(egyenlő hosszúságnál a bekérés sorrendjében fűzze össze)!
Az eredményt írja is ki! */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str1;
    string str2;
    string result;

    cout << "Adj meg egy szöveget: ";
    cin >> str1;
    cout << "Adj meg egy másik szöveget: ";
    cin >> str2;

    if (str1.length() < str2.length())
    {
        result = str2 + str1;
    }
    else
    {
        result = str1 + str2;
    }

    cout << result << endl;

    return 0;
}
