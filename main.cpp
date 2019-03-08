#include <iostream>
#include "lista.h"

using namespace std;

template <typename T>
class MyFirstTemplateClass {
private:
    T Value;
public:
    void SetValue(const T& newValue){Value = newValue;}
    const T& GetValue() const {return Value;}
};

int main()
{
    cout << "Hello World!" << endl;

    WrogiStatekKosmiczny* w_wrog = generujWroga();
    ulepszBron(w_wrog);
    MyFirstTemplateClass <int> mHoldInteger;
    mHoldInteger.SetValue(5);
    cout << "Przechowywana wartosc to: " << mHoldInteger.GetValue() << endl;

    return 0;
}
