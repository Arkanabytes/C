/* El bucle for:
Sintaxis:
		 for(inicializacion; condicion; incremento){
		 Instrucciones;
		 ...}
//Mostrar los 10 primeros numeros-ascendente es aquel numero que es divisible 
por la unidad y por si mismo*/
#include<stdio.h>
int main(){
	int i,num,cont=0;
	printf("\nSumador de los 10 primeros numeros pares");
	printf("\nDigite un numero: ");scanf("%i",&num);
		for(i=1;i<=num;i++){ //condicional lo inicializo con numero 1 que numeros mayor a 10 y el incremento
			if(num%i==0){ //numero igual mod i sea igual 0 tendremos que dividir con todos los numeros del contador
						// de dividiran con todos los contadores del bucle
				num++;	
			}
		}		
		//condicionales fuera del bucle
		if(cont>2){ //el conteo sera divisible por mas de dos numeros es decir es compuesto
			printf("\nEl numero no es primo ");
			}
			else{ // caso contrario
				printf("\nEl numero es primo ");// si el numero no es divisible por mas de dos es decir es primo
			}
	return 0;
}
