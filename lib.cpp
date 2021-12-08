#include <iostream>
#include "lib.h"

float risultato(float arrey[],int dimensione){
    float maggiore=0;
    for(int n=0; n<dimensione; n++){
        if(arrey[n]>maggiore){
            maggiore = arrey[n];
        }
    }
    return maggiore;
}
