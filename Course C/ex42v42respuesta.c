// Hacer un programa que pida por pantalla un numero del uno al 10 y mediante un procedimiento 
//muestre por pantalla el numero escrito en letras.
#include<stdio.h>
void menu();
void uno();
void dos();
void tres();
void cuatro();
void cinco();
void seis();
void siete();
void ocho();
void nueve();
void dies();

int main(){
	menu();
	return 0;
}
void menu(){
	int opc,n1;
	do{ //ejecuta
		printf("\n1.");
		printf("\n2.");
		printf("\n3.");
		printf("\n4.");
		printf("\n5.");
		printf("\n6.");
		printf("\n7.");
		printf("\n8.");
		printf("\n9.");
		printf("\n10");
		printf("\n11.Salir");
		printf("\nOpcion: ");
		scanf("%i",&opc);
		
		switch(opc){
			case 1: uno();
			case 2: dos();
			case 3:	tres();
			case 4: cuatro();
			case 5: cinco();
			case 6: seis();
			case 7:	siete();
			case 8: ocho();
			case 9: nueve();
			case 10: dies();
		}
	}while(opc!=11);// mientras sea diferente o igual a 5 
}

void uno(){
	int n1=1;
	printf("\nDigite un numero: ");scanf("%i",&n1);
	printf("\nUno");
}
void dos(){
	int n1=2;
	printf("\nDigite un numero: ");scanf("%i",&n1);
	printf("\nDos %i: ");
}
void tres(){
	int n1=3;
	printf("\nDigite un numero: ");scanf("%i",&n1);
	printf("\nTres");
}
void cuatro(){
	int n1=4;
	printf("\nDigite un numero: ");scanf("%i",&n1);
	printf("\nCuatro %i: ");
}

void cinco(){
	int n1=5;
	printf("\nDigite un numero: ");scanf("%i",&n1);
	printf("\nCinco ");
}

void seis(){
	int n1=6;
	printf("\nDigite un numero: ");scanf("%i",&n1);
	printf("\nSeis");
}

void siete(){
	int n1=7;
	printf("\nDigite un numero: ");	scanf("%i",&n1);
	printf("\nSiete %i: ");
}
void ocho(){
	int n1=8;
	printf("\nDigite un numero: ");scanf("%i",&n1);
	printf("\nOcho");
}

void nueve(){
	int n1=9;
	printf("\nDigite un numero: ");scanf("%i",&n1);
	printf("\nNueve");
}

void dies(){
	int n1=10;
	printf("\nDigite un numero: ");scanf("%i",&n1);
	printf("\nDies");
}

