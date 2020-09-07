#include <iostream>
#include <cmath>
using namespace std;

bool alkuluku(int n)
{
    int viimeinen = sqrt(n);

    for (int i = 5; i <= viimeinen; i += 6)
    {
        if (n % i == 0 || n % (i+2) == 0)
        {
            return false;
        }
    }

    return true;

}
int main()
{
    int n=0;

    cout << "Syötä kokonaisluku väliltä 2-99." << endl;
    cin >> n;

    cout << alkuluku(n);


    return 0;
}
//ei tämä toimi, palauttaa aina truen
