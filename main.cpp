#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Lithuanian");
    ifstream fD("duomenys.txt");
    ofstream fR("rezultatai.txt");

    int kiekis;
    double vidurkis;
    double suma;
    int komandos_vidurkis;

    fD >> kiekis;
    int taskai[kiekis];
    suma = 0;
    for(int i = 0; i < kiekis; i++){
        fD >> taskai [i];
        suma = suma + taskai[i];
    }

    vidurkis = suma / kiekis;

    fD >> komandos_vidurkis;

    cout<< "Krepğininkas per "<<kiekis<<" treniruotes ámetë po"<<endl;
    for(int i=0; i<kiekis; i++){
        cout<<taskai[i]<<";"<<endl;
    }
    cout<<"tağkø"<<endl;
    cout<<"Jo ámestø tağkø vidurkis per vienà treniruotæ buvo: "<<vidurkis<<endl;
    cout<<"Tuo tarpu jo komandos nariai per vienà treniruotæ ámesdavo po:"<<komandos_vidurkis<<" tağkus"<<endl;

    if(vidurkis > komandos_vidurkis){
        cout<<"Şaidëjas ámesdavo daugiau nei jo komandos nariai";
    }

    else cout<<"Şaidëjas ámesdavo maşiau nei jo komandos nariai";

    return 0;
}
