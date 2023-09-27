/*4) Crear un programa para leer por teclado la nota de n alumnos de una clase y almacenarlas en un vector, 
calcular la nota promedio de la clase y mostrar los alumnos por encima del promedia*/

#include <stdio.h>
#include<stdlib.h>

int main(){
	
	int alumnos;
	int array[alumnos];
	int nota;
	int sum = 0;
	int prom = 0;
	
	printf("Ingrese cuantos alumnos hay: ");
	scanf("%d", &alumnos);

	for(int i = 0; i < alumnos; i++){
		
		printf("Ingrese la nota del alumno %d: ", i+1);
		scanf("%d", &nota);
		array[i] = nota;
		
		sum += nota;
	}
	
	prom += sum / alumnos;
	
	printf("Promedio: %d\n", prom);
	
	for(int i = 0; i < alumnos; i++){
		if(array[i] > prom){
			printf("El alumno %d supera el promedio\n", i+1);
		}
	}
	
}
