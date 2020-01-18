#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int liczba,strzal,ile_prob=0;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe 1..100" << endl;
    srand(time(NULL));

    liczba =rand()%100+1;

    while(strzal!=liczba)
    {
        ile_prob++;

        cout<<"Zgadni jaka To liczba Twoja "<<ile_prob<<" proba:";
        cin>>strzal;

        if(strzal==liczba)
            cout<<"Wygrales! w "<<ile_prob<<" probie"<<endl;

        else if(strzal<liczba)
            cout<<"To za malo"<<endl<<endl;

        else if(strzal>liczba)
        cout<<"To za duzo"<<endl<<endl;

    }

    getchar();getchar(); //dla pewnoœæi 2 razy

    return 0;
}
