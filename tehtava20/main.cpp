#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    int a=13, b=56;
    char c='x', d='y';


    cout << "a-muuttujan arvo ennen swappia: " << a << endl;
    cout << "b-muuttujan arvo ennen swappia: " << b << endl;
    cout << endl;
    cout << "SUORITA SWAP PAINAMALLA ENTER" << endl;

    cin.ignore();

    swap(a,b);

    cout << "a-muuttujan arvo swapin jälkeen: " << a << endl;
    cout << "b-muuttujan arvo swapin jälkeen: " << b << endl;
    cout << endl;
    cout << "SUORITA SWAP PAINAMALLA ENTER" << endl;

    cin.ignore();

    cout << "c-muuttujan arvo swapin jälkeen: " << c << endl;
    cout << "d-muuttujan arvo swapin jälkeen: " << d << endl;
    cout << endl;
    cout << "SUORITA SWAP PAINAMALLA ENTER" << endl;

    cin.ignore();

    swap(c,d);

    cout << "c-muuttujan arvo swapin jälkeen: " << c << endl;
    cout << "d-muuttujan arvo swapin jälkeen: " << d << endl;



    return 0;
}
