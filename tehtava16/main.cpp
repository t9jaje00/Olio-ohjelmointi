#include <iostream>
#include <cmath>
using namespace std;

class kompleksiluku
{
    private:
        double Re;
        double Im;

    public:
        void setReal(double r)  //asettaa reaaliluvun
        {
            Re = r;
        }

        void setImag(double i)  //asettaa imaginääriluvun
        {
            Im = i;
        }

        kompleksiluku() //oletusmuodostin
        {
            Re=Im=0;
        }

        kompleksiluku(double a, double b) //parametrillinen muodostin
        {
            Re=a;
            Im=b;
        }

        double getReal()  //tulostaa realin
        {
            return Re;
        }

        double getImag()  //tulostaa imaginäärin
        {
            return Im;
        }




        double abs()    //laskee kompleksiluvun itseisarvon
        {
            return(sqrt(Re*Re+Im*Im));
        }

        double angle()  //laskee vaihekulman
        {

            double c = (atan(Im/Re));

            c = c*180/3.141592;

            return c;
        }

};

int main()
{
    kompleksiluku olio1;

    olio1.setReal(100);
    olio1.setImag(100);

    cout <<"Lukujen " << olio1.getReal() << " ja " << olio1.getImag() <<" itseisarvo on: "<< olio1.abs() <<", ja vaihekulma: "<< olio1.angle() <<" astetta.\n";

    return 0;
}
