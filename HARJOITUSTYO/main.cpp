//Olio-ohjelmoinnin harhoitustyö part1

#include <iostream>
#include <vector>
#include <iterator>
#include <array>
using namespace std;

class numero    //pääluokka "numero", joka sisältää suojatun muuttujan x, sekä julkiset funktiot
{
protected:
    int x;


public:

    void oletus()
    {
        x++;
    }

    void param(int a)
    {
        x=a;
    }
    void print(void)
    {
        cout << x << endl;
    }
};

class tuplaus : public numero   //aliluokka "tuplaus", joka periytyy numerosta. pystyy käyttämään numeron funktioita
{                               //lisäksi aliohjelma jolla tuplataan x:n arvo
public:
    void duplicate(int a)
    {
        x=a*2;
    }
};

class jako : public numero      //aliluokka "jako", joka periytyy numerosta. pystyy käyttämään numeron funktioita
{                               // lisäksi aliohjelma jolla jaetaa x:n arvo kahdella
public:
    void division(int a)
    {
        x=a/2;
    }
};

int main()
{

 numero n;


 cout << "x:n arvo ennen muodostamista on: "  << endl;
 n.print();

 cout << "oletusmuodostin on x+1:  " << endl;
 n.oletus();
 n.print();

 cout << "syötä kokonaisluku joka laitetaan x:n arvoksi." << endl;
 int a;
 cin >> a;
 n.param(a);

 cout << "x:n arvo nyt: " << endl;
 n.print();

 tuplaus ali;

 cout << "tuplataan x:n arvo 'tuplaus'-luokan 'duplicate'-funktiolla" << endl;
 ali.duplicate(a);
 cout << "x:n arvo tuplauksen jälkeen:" << endl;
 ali.print();

 jako j;

 cout << "jaetaan syötetty x:n arvo kahdella, 'jako'-luokan 'division'-funktiolla" << endl;
 j.division(a);
 cout << "x:n arvo jakamisen jälkeen" << endl;
 j.print();



    return 0;
}
