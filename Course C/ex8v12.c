/*Arkanabytes-2017*/

/*3.Sacar la hipotenusa de un triangulo rectangulo pidiendo al usuario
el valor de los 2 catetos*/
#include<stdio.h>
#include<math.h>

int main(){
	float hip,cat1,cat2;
	printf("\tCALCULO DE HIPOTENUSA");
	printf("\t\nDigite los catetos: ");
	scanf("%f %f",&cat1,&cat2);
	hip=sqrt(pow(cat1,2)+pow(cat2,2));
	printf("La hipotenusa del triangulo es: %.2f",hip);
		printf("\n\tAutor:ALEJANDRA PINTO");
	return 0;
}
