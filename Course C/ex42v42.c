// ejercicios procedimientos para operaciones aritmeticas
#include<stdio.h>
void menu();
void sumar();
void restar();
void multiplicar();
void dividir();

int main(){
	menu();
	return 0;
}
void menu(){
	int opc,n1,n2,re;
	do{ //ejecuta
		printf("\n1.Sumar");
		printf("\n2.Restar");
		printf("\n3.Multiplicar");
		printf("\n4.Dividir");
		printf("\n5.Salir");
		printf("\nOpcion: ");
		scanf("%i",&opc);
		
		switch(opc){
			case 1: sumar();
			case 2: restar();
			case 3:	multiplicar();
			case 4: dividir();
		}
	}while(opc!=5);// mientras sea diferente o igual a 5 
}

void sumar(){
	int n1,n2,suma=0;
	printf("\nDigite 2 numeros: ");
	scanf("%i %i",&n1,&n2);
	suma = n1+n2;
	printf("\nLa suma de %i: ",sumar);
}

void restar(){
	int n1,n2,restar=0;
	printf("\nDigite 2 numeros: ");
	scanf("%i %i",&n1,&n2);
	restar = n1-n2;
	printf("\nLa resta de %i: ",restar);
}

void multiplicar(){
	int n1,n2,multiplicar=0;
	printf("\nDigite 2 numeros: ");
	scanf("%i %i",&n1,&n2);
	multiplicar= n1*n2;
	printf("\nLa multiplicar de %i: ",multiplicar);
}

void dividir(){
	int n1,n2,dividir=0;
	printf("\nDigite 2 numeros: ");
	scanf("%i %i",&n1,&n2);
	dividir= n1/n2;
	printf("\nLa division de %i: ",dividir);
}


	
