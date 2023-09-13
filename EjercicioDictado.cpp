#include <stdio.h>
#include <stdlib.h>

/* Una empresa posee 8 fabricas, y emite una tarjeta por cada orden de trabajo que recibe, con los siguientes datos:
Numero de fabrica y numero de orden. Para finalizar el ingreso de orden de trabajo se debe indicar 10 como numero de orden
el programa debera determinar e informar
a- cantidad total de trabajos realizados por cada fabrica
b- cantidad total de trabajo por todas las fabricas
c- numero de fabrica que realizo la mayor cantidad de trabajos.
Para realizar este ejercicios debe definir una variable entera que servira para contabililizar la cantidad de trabajos realizados por cada fabrica, una fabrica no puede contener mas de 15
trabajos realizados */



int main(){
	
	int fabrica;
	int orden;
	int cantidadTrabajo = 0;
	
	do{
	printf("Ingrese el numero de fabrica: ");
	scanf("%d", &fabrica);
	
	printf("Ingrese el numero de orden: ");
	scanf("%d", &orden);
	
	if(orden >= 10){
		printf("No se permite una orden de 10 o mas\n");
	}
	
	
	cantidadTrabajo++;

	
	
}while(fabrica > 0 && fabrica < 8);
	
	
	
	
	
	
	
	
	
	
}
