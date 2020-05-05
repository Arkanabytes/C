/*Arkanabytes-2017*/
//Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuanto debera pagar finalmente por su compra.
#include<stdio.h>
int main(){
	float compra_total,des,precio_final;
	printf("\t\tTienda de descuentos del 15");	
    printf("\n\n\tDigite el precio de la compra: ");scanf("%f",&compra_total);
	des=compra_total*0.15;
	precio_final = compra_total-des;	
    printf("\n\tEl precio final de la compra es: %.2f",precio_final);
	printf("\n\n\tAutor:Alejandra Pinto");
	return 0;
}
