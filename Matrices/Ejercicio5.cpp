/*Crear un programa que pida dos enteros n y m. Crear dos vectores con
dimensiones n y m, y pedir al usuario que ingrese los números correspondientes
para dichos vectores. Luego de eso copiar los dos vectores a un tercer vector, y
mostrar el vector resultante en orden decreciente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n;
	int m;
	int a = 0;
	int aux;
	int numero;
	printf("Ingrese el Valor de n: ");
	scanf("%d", &n);
	
	printf("Ingrese el Valor de M: ");
	scanf("%d", &m);
	
	a += n+m;
	
	int array[n];
	int array2[m];
	int array3[a];
	
	for(int i = 0; i < n; i++){
		printf("Ingrese el valor de la posicion de N %d: ", i+1);
		scanf("%d", &numero);
		
		array[i] = numero;
		
	}	
	
	printf("--------------------\n");
	
	for(int i = 0; i < m; i++){
		printf("Ingrese el valor de la posicion de M %d: ", i+1);
		scanf("%d", &numero);
		
		array2[i] = numero;
	}


	//Agregar los valores al array3
	
	for(int i = 0; i < n; i++){
		array3[i] = array[i];
	}
	
	for(int i = 0; i < m; i++){
		array3[n+i] = array2[i];
	}


	//Para Ordenar de mayor a menor
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a - 1; j++){
	
			if(array3[j] < array3[j+1]){
			aux = array3[j];
			array3[j] = array3[j+1];
			array3[j+1] = aux;
		}
	}
}

	//Imprimir los valores
	
	for(int i = 0; i < a; i++){
		printf("Posicion %d, valor: %d\n", i+1, array3[i]);
	}
	

}
