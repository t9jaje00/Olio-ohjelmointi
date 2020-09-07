#include <iostream>

using namespace std;

int chrcount(string mj,char merkki)
{

    int merkit=0;

    for (int i=0; i < mj.size(); i++)
        if (mj[i] == merkki)
            merkit++;
    return merkit;
}

int main()
{

    string merkkijono;
    char merkki;


    cout << "Anna merkkijono" << endl;
    cin >> merkkijono;
    cout << "Haettava merkki?" << endl;
    cin >> merkki;
    cout << "Haettavaa merkkiä " << merkki << " löytyi " << chrcount(merkkijono, merkki) << " kappaletta" << endl;


    return 0;
}
