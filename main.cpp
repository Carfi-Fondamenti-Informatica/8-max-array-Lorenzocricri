#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int dimensione=0;
    cin >> dimensione;
    float arrey[dimensione], x=0;
    for(int i=0; i<dimensione; i++) {
        cin >> x;
        arrey[i] = x;
    }
    cout << risultato(arrey, dimensione);
    return 0;
}
