#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
#include <string>
using namespace std;


int main()
{

    int luku;
    vector<int> num;
    int avg;

    cout << "Syötä numeroita. Nolla lopettaa." << endl;

    do
    {
        cin >> luku;
        num.push_back(luku);
        if(luku==0)
        {
            num.pop_back();
        }
    } while(luku>0);

    avg = accumulate(num.begin(), num.end(), 0);

    avg = avg/num.size();

    cout << "Syöttämiesi lukujen keskiarvo on " << avg << endl;


    return 0;
}
