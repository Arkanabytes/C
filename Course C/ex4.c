//CURSO1
//ENTRADAS Y SALIDAS
//Arkanabytes - ALEJANDRA PINTO
/*
int main (){
	int a =10; //variable a
	float b = 15.5;//variable b
	char c= 'e';//variable c
	
	printf("\nint: %i \nfloat: %.1f \ncaracter: %c",a,b,c);// mediante un printf le digo a todas las variables que salgan por pantalla ojo la coma depues de las comillas
	return 0;
}*/
#include <stdio.h>
int main (){
	int a;
	float b;
	char c;
	printf("Digite el valor de la variables: ");
	scanf("%c",&c); // mediante un scantf le digo que tipo de variable es y lo guardo en a
	printf ("El valor de es: %c",c);
		return 0;
}
