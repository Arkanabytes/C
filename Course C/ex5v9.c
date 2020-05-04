//Entradas y Salidas
/*Arkanabytes 2017*/
#include<stdio.h>
int main(){
	char x[50];
	printf ("Digite su nombre: ");
	gets(x); //coge toda la palabra
//	scanf("%s",x); // coge la palabra antes del espacio
	printf("Su nombre es: %s",x);
	return 0;
}
