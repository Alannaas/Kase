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

    cout<< "Krep�ininkas per "<<kiekis<<" treniruotes �met� po"<<endl;
    for(int i=0; i<kiekis; i++){
        cout<<taskai[i]<<";"<<endl;
    }
    cout<<"ta�k�"<<endl;
    cout<<"Jo �mest� ta�k� vidurkis per vien� treniruot� buvo: "<<vidurkis<<endl;
    cout<<"Tuo tarpu jo komandos nariai per vien� treniruot� �mesdavo po:"<<komandos_vidurkis<<" ta�kus"<<endl;

    if(vidurkis > komandos_vidurkis){
        cout<<"�aid�jas �mesdavo daugiau nei jo komandos nariai";
    }

    else cout<<"�aid�jas �mesdavo ma�iau nei jo komandos nariai";

    return 0;
}
