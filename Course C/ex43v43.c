// hacer un programa que pida por pantalla una temperatura de grados celsius.
//y muestre un menu para convertirlos a farenhait p kelvin y muestre el equivlente
// por pantalla, utilizar funciones.

/*celsius a fahrenheit: f=(9*c)/5+32;
  celsius a kelvin: k =c+273.15 */
  
#include<stdio.h>
float fahrenheit(float C);
float kelvin(float C);

int main(){
	int opc;
	float C,F=0,K=0;
//	printf("Digite el valor de los grados que quiere convertir: ");
//	scanf("%f",&C);
		do{ //ejecuta
		printf("\n\t\tCONVERTIDOR DE TEMPERATURA");
		printf("\nDigite el valor de los grados que quiere convertir: ");
		scanf("%f",&C);
		printf("\n1.Convertidor de Celsius a Fahrenheit: ");
		printf("\n2.Convertidor de Celsius a Kelvin: ");
		printf("\n3.Salir");
		printf("\nOpcion: ");
		scanf("%i",&opc);
		switch(opc){
			case 1: F=fahrenheit(C);
					printf("\nEl equivalente en grados es:%f",F);break;
			case 2: K=kelvin(C);
					printf("\nEl equivalente en grados es:%f",K);break;
		}
	}while(opc!=3);// mientras sea diferente o igual a 5 
} 
	//return 0;
float fahrenheit(float C){
	float F=C;
	F = (9*C)/5+32;
	return F;
}
float kelvin(float C){
	float K=0;
	K = C+273.15;
	return K;
}


