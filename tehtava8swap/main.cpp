#include <iostream>

using namespace std;


void swap(int *x,int *y)
{
    int eka=*x;     //tätä ei varmaan haettu mutta toimii kuitenkin :)
    (*x)=(*y);
    (*y)=eka;
}


int main()
{

    int a=1;
    int b=2;

    cout << a <<"   "<< b <<", kokonaisluvut ennen swappia" << endl;

    swap(&a,&b);

    cout << a <<"   "<< b <<", kokonaisluvut swapin jälkeen" << endl;


    return 0;
}
