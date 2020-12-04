#include <stdio.h>
#include <stdlib.h>

typedef struct Complejo{
    float re;
    float im;
}Complejo;

void imprimirComplejo(Complejo Complejo);
Complejo sumarComplejos(Complejo c1, Complejo c2);
Complejo multiplicarComplejos(Complejo c1, Complejo c2);

/*------------------------------------------------------------*/
int main()
{
    Complejo c1 = {1,10};
    Complejo c2 = {2,-17};
    
    imprimirComplejo(c1);
    imprimirComplejo(c2);
    
    Complejo suma = sumarComplejos(c1, c2);
    Complejo multiplicacion = multiplicarComplejos(c1, c2);
    printf("Suma de los dos complejos = ");
    imprimirComplejo(suma);
    printf("multiplicacion de los dos complejos = ");
    imprimirComplejo(multiplicacion);
    return 0;
}
/*------------------------------------------------------------------*/
void imprimirComplejo(Complejo complejo){
    printf("%.4f%+.4fi\n", complejo.re,  complejo.im);
}

Complejo sumarComplejos(Complejo c1, Complejo c2){
    Complejo suma = {c1.re + c2.re, c1.im + c2.im};
    return suma;
}

Complejo multiplicarComplejos(Complejo c1, Complejo c2){
    Complejo multiplicacion = {c1.re*c2.re - c1.im*c2.im, c1.re*c2.im + c1.im*c2.re};
    return multiplicacion;
}
