/*Arkanabytes 2017*/

// Ejercicio dos pasar de celsius a farenhait
#include<stdio.h>
int main(){
	float n1,n2,op,res;
	printf("\t\tCONVERSOR DE UNIDADES");
	printf("Ingrese un numero: ");
	scanf("%f",&n1);
	printf("\n\tMenu principal: \n");
	printf("\n\t1.Convertir Celsius a Fahrenheit \n");
	printf("\n\t2.Convertir Fahrenheit a Celsius \n");
	printf("\n\t3.Convertir Fahrenheit a Kelvin \n");
	printf("\n\t4.Convertir Kelvin a Fahrenheit \n");
	printf("\n\t4.Elija una operacion: \n");
	scanf("%f",&op);
	 switch(op) {
	 	case 1: 
		 res=(n1 * 1,8)+32;
		 printf("%d x %d= /%d\n");
		 	break;
	 	case 2: res=(n1-n2)/1,8;break;
	 	case 3: res=(5/9-32)+273,15;break;
	 	case 4: res=(9/5-273,15)+32;break;
	 }
  //  printf("\tEl resultado de las operaciones es: \n\Celsius a Fahrenheit:%f \n\tFahrenheit a Celsius:%f \n\tFahrenheit a Kelvin:%f \n\t Kelvin a Fahrenheit:%f",n1,n2,op,res);
	return 0;
}
