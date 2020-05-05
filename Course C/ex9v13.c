/*Arkanabytes-2017*/
//Hacer programa que nos calcule areas de trapecios
#include<stdio.h>
int main(){
	printf("\t\t\tCalculador de areas de trapecios");
	int base_M,base_m,area,altura; // declaro la base mayor menor, area y altura 
	printf("\n\tDigite la base mayor: ");scanf("%i",&base_M);
	printf("\n\tDigite la base menor: ");scanf("%i",&base_m);
	printf("\n\tDigite la altura: ");scanf("%i",&altura);
	area=((base_M+base_m)*altura)/2;
	printf("\n\tEl resultado del calculo de los trapecios es: %i",area);
	
	printf("\n\n\tAutor:Alejandra Pinto");
	return 0;
}
