#include <iostream>
#include <list>
#include <iterator>

using namespace std;

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


    cout << "lajiteltuna\n";

    luvut.sort();
    luvut.pop_front();

    for(it=luvut.begin(); it != luvut.end(); it++)
    {
    cout << *it << endl;
    }

    return 0;
}
