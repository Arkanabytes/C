/*Arkanabytes 2017*/

//*1. Pedir 2 numeros al usuario y sumarlos, restarlos,multiplicarlos y dividirlos
#include<stdio.h>
	int main(){
				int n1,n2,suma,resta,multiplicacion,division;
				printf("\t\tCalculadora \n");
				printf("\n\tIngrese dos digitos: ");
				scanf("%i %i",&n1,&n2);
						suma =  n1+n2;	
						resta=  n1-n2;
						multiplicacion = n1*n2;
						division = n1/n2;
						printf("\tEl resultado de las operaciones es: \n\tSuma:%i \n\tResta:%i \n\tMultiplicacion:%i \n\tDivision:%i",suma,resta,multiplicacion,division);
						
						printf("\n\n\tAutor:Alejandra Pinto");
return 0;
}
