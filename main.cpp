#include <iostream>
#include "header.h"
#include "tampilan.cpp"
using namespace std;

int main()
{
    listCom L;
    adrCom inputCom;
    adrMusic inputMusic;
    composer infoCom;
    music infoMusic;
    createListCom(L);

    menuAdmin();
    
    for (int i = 1; i <= 5; i++){
        cout << "INPUT COMPOSER" << endl;
        cout << "nama: ";
        cin >> infoCom.nama;
        cout << "Tahun lahir: ";
        cin >> infoCom.tahunLahir;
        cout << "asal: ";
        cin >> infoCom.negaraAsal;
        cout << "genre utama: ";
        cin >> infoCom.genreUtama;
        cout << endl << endl;
    }
    viewList(L);
    return 0;
}
