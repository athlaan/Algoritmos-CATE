/*
Crear un programa que le pida al usuario la dimensión de un vector, los valores
enteros del mismo y un número entero k. Si k = 1 se debe ordenar el vector
descendentemente, si k > n se debe ordenar ascendentemente, y si 1 < k < n se
debe ordenar en forma creciente los primeros k elementos y en forma
decreciente los restantes.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	int numeros;
	int aux;
	int k;
	
	printf("Ingrese la dimension del vector: ");
	scanf("%d", &a);
	
	int array[a];
	
	for(int i = 0; i < a; i++){
		printf("Ingrese el valor para la posicion %d: ", i);
		scanf("%d", &numeros);
		
		array[i] = numeros;
	}
	
	printf("Ingresar valor para k: ");
	scanf("%d", &k);
	
	if(k == 1){
			//Para Ordenar de menor a mayor
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a - 1; j++){
	
			if(array[j] < array[j+1]){
			aux = array[j];
			array[j] = array[j+1];
			array[j+1] = aux;
			}
		}
	}
		
		printf("Forma Descendentemente\n");
		for(int i = 0; i < a; i++){
			printf("Posicion %d, valor: %d\n", i+1, array[i]);
		}

	}
	
	if(k > a){

		
			//Para Ordenar de mayor a menor
	for(int i = 0; i < a - 1; i++){
		for(int j = 0; j < a - 1; j++){
	
			if(array[j] > array[j+1]){
			aux = array[j];
			array[j] = array[j+1];	
			array[j+1] = aux;
			}
		}
	}

		printf("Forma Ascendente\n");
		for(int i = 0; i < a; i++){
			printf("Posicion %d, valor: %d\n", i+1, array[i]);
		}


}



/*	if(k < a){
		
	for(int i = 0; i < a - 1; i++){
		for(int j = 0; j < a - 1; j++){
	
			if(array[j] > array[j+1]){
			aux = array[j];
			array[j] = array[j+1];	
			array[j+1] = aux;
			}
		}
	}
	
	}
	
	
	for(int i = 0; i < a - 1; i++){
		for(int j = 0; j < a - 1 + k; j++){

			if(array[j] < array[j+1]){
			aux = array[j];
			array[j] = array[j+1];	
			array[j+1] = aux;
			}
		}
	}

	for(int i = 0; i < a; i++){
		printf("Posicion %d, valor: %d\n", i+1, array[i]);
	}*/


	
}


