#include "Complejo.h"
#include <stdlib.h>
void manejaMsg(int);
COMPLEJO crearComplejo(){
    COMPLEJO C;
    C=(COMPLEJO)malloc(sizeof(Complejo));
    if(C==NULL){
        manejaMsg(0);
        exit(0);
    }
    return C;
}
void asignaReal(COMPLEJO C, float r){
    C-> real =r;
}
void asignaImaginario(COMPLEJO C, float i){
    C-> imaginario=i;
}
float obtenReal(COMPLEJO C){
    return(C->real);
}
float obtenImaginario(COMPLEJO C){
    return(C->imaginario);
}
COMPLEJO suma(COMPLEJO C1, COMPLEJO C2){
    COMPLEJO C3=crearComplejo();
    asignaReal(C3,obtenReal(C1)+obtenReal(C2));
    asignaImaginario(C3, obtenImaginario(C1)+ obtenImaginario(C2));
    return C3;
}