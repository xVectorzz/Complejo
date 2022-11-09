#ifndef _complejo_
#define _complejo_

typedef struct{
    float real;
    float imaginario;
}Complejo;
typedef Complejo  * COMPLEJO;
COMPLEJO crearComplejo(void);
void asignaReal(COMPLEJO C,float r);
void asignaImaginario(COMPLEJO C,float i);
float obtenReal(COMPLEJO C);
float obtenImaginario(COMPLEJO C);
COMPLEJO suma(COMPLEJO C1,COMPLEJO C2);
#endif