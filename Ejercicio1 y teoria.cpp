//1) Escriba la definicion de Sistema informatico
//2) Escriba la definicion de Dato, informacion y proceso
//3) ¿Que es una variable?

//1- la definicion de un sistema informatico es un conjunto de elementos que se conectan entre si. inc

/*2- Dato: El dato es donde se van a guardar las variables que ingresemos. por ejemplo un char, un float, un double y un entero 
   Informacion: La informacion es que pasa el dato, lo almacena a una variable y se lo pasa al proceso.
   Proceso: El proceso son pasos que realiza la maquina, y nos devuelve un valor
*/
//3- La variable es un espacio de memoria donde se almacenan los datos.

/*
	1) Crear un programa que tras asignar los números: -2,5,8,-9,10,15 y -4 a un arreglo calcule e informe
	independientemente, la suma de los elementos positivos y la de los elementos negativos

*/

/*2) Crear un programa que mediante un menu, permite consultar, asignar, modificar y eliminar datos de un vector de 20 posiciones.
Para realizar las operaciones, se debe ingresar la posicion del vector a la cual se desea acceder*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int dato;
	int array[7];
	int sumaPositiva = 0;
	int sumaNegativa = 0;
	
	for(int i = 0; i < 7; i++){
	
		printf("Ingrese estos datos en orden: -2, 5, 8, -9, 10, 15, -4\n");
		
		printf("Ingrese el dato para la posicion %d: ", i+1);
		scanf("%d", &dato);
			
		array[i] = dato;
		
		if(array[i] < 0){
			sumaNegativa += array[i];
		}else if(array[i] > 0){
			sumaPositiva += array[i];
		}
		
	}
	printf("La suma de los numeros positivos es de: %d\n", sumaPositiva);
	printf("La suma de los numeros negativos es de: %d\n", sumaNegativa);

}	


