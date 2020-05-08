//factorial de un numero es decir aquello multiplicacion sucesiva hasta llegar al numero dado
// ejemplo si dedico el factorial de 5 se tiene que multiplicar el factorial 
// de u1*2*3*4*5
#include<stdio.h>
int main(){
	int i,num,factorial=1; // lo inicializo en uno por que si no siempre dara cero si inicializo con cero
	printf("\tCalcular el factor de un producto");
	printf("\nDigite un numero: ");
	scanf("%i",&num);
	//Comenzamos con el bucle for
		for (i=1;i<=num;i++){
			factorial*=i;
		}
		printf("\nEl factorial del numero es: %i",factorial);
	return 0;
}
