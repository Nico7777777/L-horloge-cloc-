#include<iostream>
#include<windows.h>
using namespace std;
short unsigned int ora, minut, secunda;
int main()
{
    cout<<"Cat este ceasul?";
    cout<<"h:";cin>>ora;  cout<<"min:";cin>>minut;  cout<<"sec:";cin>>secunda;

    while(true)
    {
        cout<<ora<<":"<<minut<<":"<<secunda;
        Sleep(1000);
        system("cls");
        secunda++;
        if(secunda == 60){secunda=0; minut++;}
        if(minut == 60){minut=0; ora++;}
        if(ora == 24) ora=0;
    }
}
