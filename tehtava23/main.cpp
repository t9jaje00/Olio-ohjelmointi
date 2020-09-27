#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <numeric>
using namespace std;

int main()
{
    srand(unsigned(time(0)));

    vector<int> v;
    for(int i=1; i <= 40; i++)
        v.push_back(i);

    random_shuffle(v.begin(), v.end());

    cout << "Illan lottonumerot ovat: " << endl;

    for(int i=0; i<7; i++)
        cout << v.at(i) << endl;

    cout << "Ja lisänumerot: " << endl;

    for(int i=7; i<10; i++)
        cout << v.at(i) << endl;



    return 0;
}
