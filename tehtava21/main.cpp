//REVERSE

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string sana;
    string syotetty_sana;
    string reverse_sana;
    cout << "syötä sana, niin tarkastellaan onko se palindromi" << endl;
    cin >> sana;

    syotetty_sana = sana;

    reverse(sana.begin(), sana.end());

    reverse_sana = sana;

    if(syotetty_sana == reverse_sana)
    {
        cout <<"on toisinpäin:\n"<< reverse_sana <<"\n"<< "tämähän on palindromi!" << endl;
    }

    else

        cout <<"on toisinpäin:\n"<< reverse_sana <<"\n"<< "eipä ollu palindromi" << endl;


    return 0;
}
