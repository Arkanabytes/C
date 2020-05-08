/*Arkanabytes*/
//sumar los numeros 1+2+4+5...
/* 
impares (+)
pares(-)
suma_pares =-2-4*6...
suma_impares=1+3+5
suma = suma_pares + suma_impares
1-2+3-4+5-6
-1+3-4+5-6
2-4+5-6
-2+5-6
3-6
-3
*/

#include<stdio.h>
int main(){
	int n,i,suma=0,suma_pares=0,suma_impares=0,ne;
	printf("\tSUMADOR DE NUMEROS 1+2+3");
	printf("\nDigite un numero: ");
	scanf("%i",&n);
	i=1;
	while(i<=n){//mientras i es menor o igual a n
		if(i%2==0){ // si se cumple esto sera par
				ne = i *(-1); // ahora lo necesitamos a pasar a negativo
				suma_pares += ne;	
		}
		else{
			suma_impares +=i;
		
			}	
			i++;//incrementa
			}
		suma = suma_pares+suma_impares;
		printf("\nLa suma total es: %i",&suma);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	

