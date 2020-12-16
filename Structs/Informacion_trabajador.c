/*Arkanabytes*/

/* Paso de una estructura por referencia. */
	#include <stdio.h>
	struct trabajador
	{
		char nombre[20];
		char apellidos[40];
		int edad;
		char puesto[10];
	};

	void visualizar(struct trabajador *);
        int main() /* Rellenar y visualizar */
	{
		struct trabajador fijo;
		printf("Nombre: ");
		scanf("%s",fijo.nombre);
		printf("\nApellidos: ");
		scanf("%s",fijo.apellidos);
		printf("\nEdad: ");
		scanf("%d",&fijo.edad);
		printf("\nPuesto: ");
		scanf("%s",fijo.puesto);
		visualizar(&fijo);
	}

	void visualizar(struct trabajador *datos)
	{
		printf("Nombre: %s",datos->nombre);
		printf("\nApellidos: %s",datos->apellidos);
		printf("\nEdad: %d",datos->edad);
		printf("\nPuesto: %s",datos->puesto);
	}
