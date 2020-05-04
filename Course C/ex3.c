//tipos de datos 
//ejercicio 3
//Arkanabytes - alejandra pinto

#include<stdio.h>

int main(){
	char a = 'e'; //tamaño= 1byte Rango:0..255 //caracter de elemento cualquiera letra, simbolo o numero
	short b = -15; //tamaño= 2byte Rango:-128...127
	int c= 1024; //tamaño= 2bytes Rango:-32768...32767
	unsigned int d = 128; //tamaño= 2bytes Rango: 0...65535  //entero positivo
	long e=123456; //tamaño = 4bytes
	float f = 15.678; //tamaño= 4bytes
	double m = 123123.123123;//tamaño= 8bytes
	printf("El elemento es: %li",e); //dejar el punto y saca los decimales
		return 0;
}
