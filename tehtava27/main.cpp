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


int main()
{
    suorakulmio s(10,50);
    cout <<"s:n pinta-ala: " << s.pintaala() << endl;



    return 0;
}
