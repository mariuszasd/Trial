#ifndef NAGLOWKI_H
#define NAGLOWKI_H

struct WrogiStatekKosmiczny{
    int wspolrzedna_x;
    int wspolrzedna_y;
    int moc_broni;
    WrogiStatekKosmiczny * w_nastepny_wrog;
};

WrogiStatekKosmiczny* generujWroga();
void ulepszBron(WrogiStatekKosmiczny * w_statek);

#endif // NAGLOWKI_H
