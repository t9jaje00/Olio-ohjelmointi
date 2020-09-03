#include <iostream>

using namespace std;

//Tämä ei oikein luonnistunut

int summa(int *t,int N)
{
    int laskuri=0;
    int x=0;

    while (laskuri<=N)
{
        x=x+t[*t];
        (*t)++;
    }
    return x;
}

int main()
{
    int N=5;
    int t[]={1,2,3,4,5};

    summa(t,N);

    cout << summa(t,N);

    return 0;
}
