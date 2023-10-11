/*Modificar el ejercicio anterior para calcular e informar el valor máximo y mínimo del
vector.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	int num;
	int aux;
	int max = INT_MIN;
	int min = INT_MAX;
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

	//Informar Valor Maximo y minimo
	for(int i = 0; i < a; i++){
	
		if(array[i] > max){

			max = array[i];
	
		}
		
		if(array[i] < min){
			min = array[i];
		}
	
		printf("Posicion %d, valor: %d\n", i, array[i]);		
	}

		printf("Valor Maximo: %d\n", max);
		printf("Valor Minimo: %d\n", min);

}

