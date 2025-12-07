#ifndef COMPOSER_H_INCLUDED
#define COMPOSER_H_INCLUDED
#include <iostream>
using namespace std;


//ADT composer
typedef struct elemenComposer *adrCom;
struct composer{
    string nama;
    int tahunLahir;
    string genreUtama;
    string negaraAsal;
};
struct elemenComposer {
    composer infoCom;
    adrCom next;
    adrCom prev;
    adrMusic firstMusic;
};
struct listCom {
    adrCom first;
    adrCom last;
};


//ADT music
typedef struct elemenMusic *adrMusic;
struct music{
    string judul;
    string penyanyi;
    string genre;
    int tahunTerbit;
};
struct elemenMusic {
    music infoMusic;
    adrMusic next;
};


#endif // COMPOSER_H_INCLUDED
