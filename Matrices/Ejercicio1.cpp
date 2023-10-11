/*Crear un programa en donde se pida al usuario la dimensión del vector a crear, y luego
se pida al mismo que ingrese números enteros correspondientes a cada posición del
vector. Se debe ordenar el mismo en forma creciente y luego mostrar el vector
ordenado indicando los índices correspondientes a cada valor.
*/



#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	int num;
	int aux;
	printf("Ingrese la dimension del array: ");
	scanf("%d", &a);	
	
	int array[a];
	
	for(int i = 0; i < a; i++){
		printf("Ingrese un valor para la posicion %d: ", i+1);
		scanf("%d", &num);
		
		array[i] = num;
	
		}
	
	//Para Ordenar de mayor a menor
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a; j++){
		
			if(array[j] > array[j+1]){
			aux = array[j];
			array[j] = array[j+1];
			array[j+1] = aux;
		}
	}
}


	printf("Forma creciente:\n");
	for(int i = 0; i < a; i++){
		printf("%d\n", array[i]);
	}
	
}
