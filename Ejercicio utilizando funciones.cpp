#include <stdio.h>
#include <stdlib.h>


void IngresarValores(int longitud, int array[]){
	
	for(int i = 0; i < longitud; i++){
		
		printf("Ingrese el dato para la posicion %d :", i+1);
		scanf("%d", &array[i]);
	}
}



void ordenamiento(int longitud, int array[], int aux = 0){
	
	
	for(int i = 0; i < longitud; i++){
		for(int j = 0; j < longitud; j++){
			if(array[j] > array[j+1]){
			aux = array[j]; 
			array[j] = array[j+1];
			array[j+1] = aux;
			}
		}		
	}
}


int main(){

	int longitud;
	printf("Ingrese la longitud del array: ");
	scanf("%d", &longitud);

	int array[longitud];

	IngresarValores(longitud, array);

	ordenamiento(longitud, array);
	
	for(int i = 0; i < longitud; i++){
		printf("%d\n", array[i]);
	}
	return 0;
}
