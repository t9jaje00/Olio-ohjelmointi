#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

bool parillinen(int luku)
{
    return ((luku%2)==0);
}


int main()
{

    list <int> luvut;
    list <int>::iterator it;
    int luku;

    cout << "Syötä lukuja. Nolla = valmis\n";

    do
    {
        cin >> luku;
        luvut.push_back(luku);
    }   while(luku>0);


    cout << "lajiteltuna pienimmästä suurimpaan\n";

    luvut.sort();
    luvut.pop_front();

    for(it=luvut.begin(); it != luvut.end(); it++)
    {
    cout << *it << endl;
    }


    int laskuri = count_if (luvut.begin(), luvut.end(), parillinen);
    cout << "parillisia lukuja: " << laskuri << endl;









    return 0;
}
