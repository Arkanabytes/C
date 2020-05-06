//1. Determinar si un numero es par o no
/*
#include<stdio.h>
int comprobar (int n1); // prototipo del cual decimos que la funcion existe
int main(){
	int n1,re;
	printf("\nDigite un numero: ");
	scanf("%i",&n1);
	re = comprobar(n1);
		if(re==0){
				printf("\nLa suma es par"); 
				}else{
					printf("\nEs impar"); 
				}
 
	return 0;
}
int comprobar(int n1){ // parametros con los que se ejecutara y resolvera el problema
	int suma = 0;
		if(n1%2==0){
		return 0;			
		} else{
			return 1;
		}

} */

//1. Determinar si un numero es par o no
#include<stdio.h>
int comprobar(int n1); // prototipo del cual decimos que la funcion existe
int main(){
	int n1,re;
	printf("\nDigite un numero: ");
	scanf("%i",&n1);
	comprobar(n1);
	return 0;
} 
int comprobar(int n1){ 
	if(n1%2 == 0){
				printf("\nLa suma es par"); 
				}else{
					printf("\nEs impar"); 
				}
}
