#include <iostream>

using namespace std;

class muoto {
      private:
      protected:
         double a,b;
      public:


};

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


int main()
{
    suorakulmio s(10,50);
    nelio n(10);
    cout <<"suorakulmion pinta-ala: " << s.pintaala() << endl;
    cout <<"neliön pinta-ala: " << n.nelionala() << endl;


    return 0;
}
