#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vektori;

    for(int i=1; i <= 100; i++) //työnnetäät luvut 1-100 vektoriin
        vektori.push_back(i);

    for (auto i = vektori.begin(); i != vektori.end(); i++) // tulostetaan vektori alusta loppuun, i:tä osoittimena käyttäen
        cout << *i << "\n";


    return 0;
}
