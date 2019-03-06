#include <cstddef>
#include "libcr.h"

struct WrogiStatekKosmiczny{
    int wspolrzedna_x;
    int wspolrzedna_y;
    int moc_broni;
    WrogiStatekKosmiczny * w_nastepny_wrog;
};

WrogiStatekKosmiczny* generujWroga(){
    WrogiStatekKosmiczny* w_statek = new WrogiStatekKosmiczny;
    w_statek->wspolrzedna_x = 0;
    w_statek->wspolrzedna_y = 0;
    w_statek->moc_broni = 0;
    w_statek->w_nastepny_wrog = NULL;
    return w_statek;
}

void ulepszBron(WrogiStatekKosmiczny * w_statek){
    w_statek->moc_broni += 10;
}
