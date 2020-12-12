/*Arkanbytes*/

int main(){
typedef enum TipoMeses{enero,febrero,marzo,abril,mayo, junio,julio, agosto,septiembre, octubre, noviembre, diciembre};
typedef char Cadena[11];
Cadena texto;
TipoMeses mes;
int Mes;
scanf ("%s", &texto);
Mes=texto;

switch (Mes){
 case enero:
 break;
 case febrero:printf("toma toma toma");
 break;
 case marzo:
 case abril:
 case mayo:
 case junio:
 case julio:printf("los cinco del tiron");
 break;
 case agosto:
 case septiembre:
 case octubre:
 case noviembre:
 case diciembre:printf ("ya nos vamos pa madrid");
 break;
 default:printf ("lalalalalalalalalalalalala");

 }
}
