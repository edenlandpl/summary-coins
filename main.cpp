#include <iostream>
#include <conio.h>

using namespace std;
int g1=0, g2=0, g5=0, g10=0, g20=0, g50=0, zl1=0, zl2=0, zl5=0, rzecz=0, ilosc=0, sumg=0, sumzl=0, odp;
string moneta;
int main()
{
    cout << "Podaj ile rzeczy wyciagnales z kieszeni" << endl;
    cin >> ilosc  ;
    while(ilosc>0)
    {
        cout << "Czy rzecz to moneta 1 - tak, 0 - nie? " << endl;
        cin >> odp ;
        if (odp>0)
        {
            cout << "Podaj jaka to moneta : 1g, 2g, 5g, 10g, 20g, 50g, 1zl, 2zl, 5zl ?"<< endl;
            cin >> moneta;
            if (moneta=="1g")
            {
                cout << " Masz grosza" <<endl;
                g1++;
            }
            else
                {
                    if (moneta=="2g")
                {
                    g2++;
                }
            else
                {
               if (moneta=="5g")
            {
                g5++;
            }
            else
                {
                    if (moneta=="10g")
            {
                g10++;
            }
            else
                {
                    if (moneta=="20g")
            {
                g20++;
            }
            else
                {
                    if (moneta=="50g")
            {
                g50++;
            }
            else
                {
                    if (moneta=="1zl")
            {
                zl1++;
            }
            else
                {
                    if (moneta=="2zl")
            {
                zl2++;
            }
            else
                {
                    if (moneta=="5zl")
            {
                zl5++;
            }
            else
                {
                    cout <<"Nie ma innych monet";
                }
                }
                }
                }
                }
                }
                }
                }
                }}
            else
        {
               rzecz++;
        }
        ilosc--;
    }
    cout << " Masz groszy - " << g1+g2+g5+g10+g20+g50 << endl;
    cout << " Masz zlotych - " << zl1+zl2+zl5 << endl;
    cout << " Masz 1 groszowek - " << g1 << endl;
    cout << " Masz 2 groszowek - " << g2 << endl;
    cout << " Masz 5 groszowek - " << g5 << endl;
    cout << " Masz 10 groszowek - " << g10 << endl;
    cout << " Masz 20 groszowek - " << g20 << endl;
    cout << " Masz 50 groszowek - " << g50 << endl;
    cout << " Masz 1 zlotowek - " << zl1 << endl;
    cout << " Masz 2 zlotowek - " << zl2 << endl;
    cout << " Masz 5 zlotowek - " << zl5 << endl;
    return 0;
}
