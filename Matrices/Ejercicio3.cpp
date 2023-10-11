/*
Modificar el ejercicio anterior para calcular e informar la cantidad de números
negativos, positivos y ceros.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	int num;
	int aux;
	int positivo = 0;
	int negativo = 0;
	int cero = 0;
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
	
		if(array[i] < 0){
			negativo++;
		}else if(array[i] > 0){
			positivo++;
		}else if(array[i] == 0){
			cero++;
		}
		

		printf("Posicion %d, valor: %d\n", i, array[i]);		
	}
	printf("-------------------\n");
	printf("Numeros positivos: %d\n", positivo);
	printf("Numeros negativos: %d\n", negativo);
	printf("Numeros Ceros: %d\n", cero);
}


