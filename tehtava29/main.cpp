#include <iostream>

using namespace std;
//täällä double a ja b
class muoto {

      private:
      protected:
         double a,b;
      public:


};

//täällä sk:n pa, oletus ja param. muodostimet a:lle ja b:lle
class suorakulmio : public muoto
{
public:
    suorakulmio()
    {
        a=10;
        b=10;
    }

    suorakulmio(double x, double y)
    {
        a=x;
        b=y;
    }

    double pintaala() const
    {
        return a*b;
    }


};

//täällä neliön pa, ja param. muodostin
class nelio : public suorakulmio
{
public:
    nelio(double x)
    {
        a=x;
    }

    double nelionala() const
    {
        return a*a;
    }
};

//täällä ellipsin pa ja oletus + param. muod.
class ellipsi : public muoto
{
public:
    ellipsi()
    {
        a=10;
        b=20;
    }

    ellipsi(double x, double y)
    {
        a=x;
        b=y;
    }

    double ellipsinala() const
    {
        return 3.141592653 * a * b;
    }
};

// täällä ympyrän pa ja param. muod.
class ympyrä : public ellipsi
{
public:
    ympyrä(double x)
    {
        a=x;
    }

    double ympyränala() const
    {
        return 3.141592653 * a * a;
    }
};

int main()
{
    suorakulmio s(10,50);
    nelio n(10);
    ellipsi e(10,10);
    ympyrä y(40);
    cout <<"suorakulmion pinta-ala: " << s.pintaala() << endl;
    cout <<"neliön pinta-ala: " << n.nelionala() << endl;
    cout <<"ellipsin pinta-ala: " << e.ellipsinala() << endl;
    cout <<"ympyrän pinta-ala: " << y.ympyränala() << endl;



    return 0;
}
