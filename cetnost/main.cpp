#include <iostream>
// Na standardním vstupu je blíže neurčený počet celočíselných hodnot. Je známo, že se jedná o čísla v rozsahu 10 až 1000.
// Vypište na standardní výstup tabulku četností vstupních čísel, tj. u každého čísla počet jeho výskytů ve vstupní řadě.
//mincislo,maxcislo,rozsah,
using namespace std;

int main()
{
    const int MIN_CISLO = 10;
    const int MAX_CISLO = 1000;
    const int ROZSAH = MAX_CISLO - MIN_CISLO + 1;

    int cetnosti[ROZSAH] = {0}; // Pole pro uložení četností čísel
    int x;

    // Načítání čísel ze standardního vstupu
    cin >> x;
    while (x >= MIN_CISLO && x <= MAX_CISLO) {
        cetnosti[x - MIN_CISLO]++; // Zvyš četnost daného čísla
        cin >> x;
    }

    // Výpis tabulky četností
    for (int i = 0; i < ROZSAH; ++i) {
        if (cetnosti[i] > 0) {
            cout << "Cislo " << (i + MIN_CISLO) << " se zde vyskytlo " << cetnosti[i] << "-krat" << endl;
        }
    }

    return 0;
}