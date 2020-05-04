/*Arkanabytes*/
//curso1
//ex2
//alejandra pinto
//directivas del procesador y variables
#include <stdio.h> //sirve para imprimir cosas por pantalla entrada y salida de entradas
#define PI 3.1416 //macro define el valor de pi y sera definido por los numeros 
int y=5; //variable global
int main (){
	int x =10;  //variable que puede variar sera de tipo entero y es variable local 
	float suma=0; // variable tipo suma
	suma=PI+x; // dentro de la suma es pi + es el valor de x
	printf ("La suma es: %.3f",suma); //nota cabe decir que hay que poner.y los decimales que quieres que salgan
	return 0;
	
}*/

//DIRECTIVAS DEL PROCESADOR Y VARIABLES
#include<stdio.h>// libreria
#define PI 3.1416 //macro

int y = 5;
int main(){
	int x=10; //variable local
	float suma = 0;
	suma = PI + x;
	printf ("La suma es : %.2f",suma);
	
}

