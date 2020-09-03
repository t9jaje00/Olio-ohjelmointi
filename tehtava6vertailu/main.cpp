#include <iostream>

using namespace std;

bool vertaa(int a, int b)
{
    if (a==b)
        return true;
    else
        return false;
}


int main()
{
    int a=0;
    int b=0;

    cout << "Syötä kokonaisluku" << endl;
    cin >> a;
    cout << "Syötä toinen kokonaisluku" << endl;
    cin >> b;

    if (vertaa(a,b))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
