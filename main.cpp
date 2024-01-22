#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream fD("duomenys.txt");
    ofstream fR("rezultatai.txt");

    int kiekis;
    double vidurkis;
    double suma;
    int komandos_vidurkis;
    int taskai[];

    fD >> kiekis;
    suma = 0;
    for(int i = 0; i < kiekis; i++){
        suma = suma + taskai[i]
    }

    vidurkis = suma / kiekis;

    return 0;
}
