#include <iostream>
//Na standardním vstupu jsou zadána čísla X a Y udávající rozměry rastrového obrazu v pixelech a za nimi
//je odpovídající počet pixelů v odstínech šedi (hodnoty v rozsahu 0 až 255). Vypište na standardní výstup
//histogram tohoto obrazu (tj. ke každému z 256 odstínů počet pixelů, které měly tento odstín).

using namespace std;
int main() {
    int X, Y;
    cin >> X >> Y;  // Načteme rozměry obrazu

    // Vytvoříme histogram pro 256 odstínů šedi
    int histogram[256] = {0};  // Pole o 256 prvcích, inicializované na 0

    int pixel;
    // Načteme všechny pixely a inkrementujeme příslušný index histogramu
    for (int i = 0; i < X * Y; ++i) {
        cin >> pixel;  // Načteme hodnotu pixelu
        if (pixel >= 0 && pixel <= 255) {
            histogram[pixel]++;  // Zvětšíme počet pixelů pro daný odstín
        }
    }

    // Vytiskneme histograma
    for (int i = 0; i < 256; ++i) {
        cout << i << ": " << histogram[i] << endl;
    }

    return 0;
}