#include <iostream>
#include <cmath>
using namespace std;


//Na vstupu je řada celých čísel ukončená číslem −333 (toto číslo do řady již nepatří).
//Určete, kolik se v číslech vyskytovalo jednotlivých číslic (kolik nul, jedniček, ...).



int main() {
    int pocetCifer [10] = {0};
    int num;

    while(cin>>num && num !=-333) {

        int absCislo = abs(num);
        while(absCislo > 0) {
            int cifra = absCislo%10;
            pocetCifer[cifra]++;
            absCislo /= 10;
        }

    }
    cout<< "Cislice cetnost"<<endl;
   for(int i = 0; i < 10; i++) {
       cout<< i<< "\t"<<pocetCifer[i]<<endl;
   }

}
