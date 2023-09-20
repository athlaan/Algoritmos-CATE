/* 
1) Crear un programa que almacene en un arreglo, los numeros primos comprendidos entre 1 y 100 y luego, 
lo muestre por consola indicando los indices correspondientes a cada valor

2) Crear un programa que solicite 5 numeros los almacene en un arreglo y que luego calcule el promedio y que lo imprima

3) Crear un programa que solicite al usuario llenar un vector entero de n posiciones. y luego crear un menu para buscar un numero del vector, indicando por consola que se a encontrado o no, 
y en el caso de encontrarse en que posicion se encuentra

4) Crear un programa para leer por teclado la nota de n alumnos de una clase y almacenarlas en un vector, 
calcular la nota promedio de la clase y mostrar los alumnos por encima del promedia

5) Crear un programa donde se almacene los numeros del 1 al 100 en un vector, y se informe por consola los numeros pares y impares

6)Crear un programa en c, que pida una cadena de caracteres al usuario y muestre por pantalla la cadena invertida

7) Realice un programa en c que lea en un array, los seo de n estudiantes del curso de algortimos y estructuras de datos y que 
determine cuantos hombres y mujeres se encuentran en el grupo, suponiendo que los datos son extraidos alumno por alumno

8) Realice un programa en c que permita leer una linea de caracteres y que devuelva el numero de caracteres que tiene dicha cadena
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
		
	int num;
	int array[num];
	int cont = 0;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	
	for(int i = num; i > 100 ; i--){
		
		if(num % i == 0){
			cont++;
			printf("Resto cero");
		}
		printf("%d", array[i]);	
		
	}
}
