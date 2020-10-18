//Harjoitustyö part2, ajatustenlukija.

#include <iostream>
#include <list>
using namespace std;

class rivit     // luokka rivit, talletettu rivit listeihin
{
    list<int> rivi1 = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31};
    list<int> rivi2 = {2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31};
    list<int> rivi3 = {4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31};
    list<int> rivi4 = {8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31};
    list<int> rivi5 = {16,17,18,19,20,21,22,23,25,26,27,28,29,30,31};

public:

    void showlist(list <int> g)     //funktio tulostaa listan sisällön beginistä endiin
    {
        list <int> :: iterator it;
        for(it = g.begin(); it != g.end(); ++it)
            cout << *it << ",";
    }

    int rivi1eka()          //nämä funktiot palauttavat listan ensimmäisen arvon, jota käytetään main-osiossa yhteenlaskussa
    {
        return rivi1.front();
    }

    int rivi2eka()
    {
        return rivi2.front();
    }

    int rivi3eka()
    {
        return rivi3.front();
    }

    int rivi4eka()
    {
        return rivi4.front();
    }

    int rivi5eka()
    {
        return rivi5.front();
    }

    void printrivi()        //funktio tulostaa listat
    {
        cout << endl;
        cout << "RIVI 1: (";
        showlist(rivi1);
        cout << ")\n";
        cout << endl;
        cout << "RIVI 2: (";
        showlist(rivi2);
        cout << ")\n";
        cout << endl;
        cout << "RIVI 3: (";
        showlist(rivi3);
        cout << ")\n";
        cout << endl;
        cout << "RIVI 4: (";
        showlist(rivi4);
        cout << ")\n";
        cout << endl;
        cout << "RIVI 5: (";
        showlist(rivi5);
        cout << ")\n";
        cout << endl;
    }
};


int main()
{
    int ajateltuluku=0;
    int valinta=100;
    rivit r;

    cout << "Ajattele jotain lukua väliltä 1-31" <<endl;
    cout << "jatka painamalla ENTER" << endl;

    cin.ignore();
    r.printrivi();

    cout << "Syötä yksi kerrallaan sen rivin numero(1-5), jossa ajattelemasi luku esiintyy. 0 = valmis" << endl;

    do{     //loopataan switch-casea, kunnes syötetään 0.

        cin >> valinta;

            switch (valinta)        // switch-casessa lisätään valitun rivin ensimmäinen arvo 'ajateltuluku'-muuttujaan
            {                       //joka on ajatellun luvun sisältämien rivien ensimmäisten arvojen summa.
                case 1:
                    ajateltuluku = ajateltuluku + r.rivi1eka();
                break;

                case 2:
                    ajateltuluku = ajateltuluku + r.rivi2eka();
                break;

                case 3:
                    ajateltuluku = ajateltuluku + r.rivi3eka();
                break;

                case 4:
                    ajateltuluku = ajateltuluku + r.rivi4eka();
                break;

                case 5:
                    ajateltuluku = ajateltuluku + r.rivi5eka();
                break;

                case 0:
                    cout << "ajattelemasi luku on: " << ajateltuluku << endl;
                break;

                default:
                    cout << "ERROR! valiste rivi väliltä 1-5" << endl;
            }
    } while (valinta>0);

    return 0;
}
