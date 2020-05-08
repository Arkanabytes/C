#include<stdio.h>
int main(){
	int n,i;
	printf("\tMultiplos a comprobar");
	printf("\n\tDigite el total de numeros a comprobar: "); //ingresa el usuario los numeros
	scanf("%i",&n);// guardo la informacion
	i=1; // lo inicializo la i con un uno
	while(i<=n){ // mientras que i menor o igual a n
		if(i%5==0){// si su i lo iria sumando pero con el mod lo divido para encontrar el residuo es igual a cero  3 igual cero
			printf("\t%i",i);	
			}
			i++; // incrementa un numero mas
			}
		return 0;
}

