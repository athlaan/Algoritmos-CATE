/*2) Crear un programa que solicite 5 numeros los almacene en un arreglo y que luego calcule el promedio y que lo imprima*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int array[5];
	int num;
	int prom = 0;
	int sum = 0;
	
	for(int i = 0; i < 5; i++){
		printf("Ingrese 5 Numeros: ");
		scanf("%d", &array[num]);
	
		sum += array[num];	
	
	}
	prom += sum / 5;
	
	printf("El promedio es: %d", prom);
}
