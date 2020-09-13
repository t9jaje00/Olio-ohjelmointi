#include <iostream>
using namespace std;

// Olio-ohlemointi tehtävät 11-15

//JOTAIN HÄIKKÄÄ COMPARE FUNKTIOSSA!

class suorakulmio
{

    double W;
    double H;

public:

    suorakulmio()
    {                  // oletusmuodostin joka asettaa sivunpituudet nolliksi
        W = 0;
        H = 0;
    }

    suorakulmio(double a, double b) //parametrillinen muodostin, jolla voidaan asettaa arvot olion luonnin yhteydessä
    {
        W = a;
        H = b;
    }

    /*suorakulmio(suorakulmio &L)     //Kopiointimuodostin
    {
        W = L.W;
        H = L.W;
    }*/



    void setW(double a){

        W = a;
    }

    void setH(double b){

        H = b;
    }

    double area() const;
    int compare(suorakulmio) const;
    double getW() const;
    double getH() const;
};


double a;
double b;



int main()
{


    suorakulmio olio1;
    olio1.setW(86);
    olio1.setH(68);

    suorakulmio olio2(63,98);


    cout << "suorakulma1 pinta-ala: "<< olio1.area() << endl;
    cout << "suorakulma2 pinta-ala: "<< olio2.area() << endl;

    cout << "vertailu-funkio palauttaa:  " << olio1.compare(olio2) << endl;

    return 0;
}


double suorakulmio::getW() const{

    return W;
}



double suorakulmio::getH() const{

    return H;
}

double suorakulmio::area() const{

    return W*H;
}

int suorakulmio::compare(suorakulmio) const
{
        if (this->area() > area())
            return 1;
        if (this->area() == area())
            return 0;
        if (this->area() < area())
            return -1;
        else
            return 9999;
}


