#include <iostream>
#include "lista.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    WrogiStatekKosmiczny* w_wrog = generujWroga();
    ulepszBron(w_wrog);
    return 0;
}
