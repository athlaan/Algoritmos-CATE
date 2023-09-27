/*8) Realice un programa en c que permita leer una linea de caracteres y que devuelva el numero de caracteres que tiene dicha cadena*/

#include <stdio.h>
#include<stdlib.h>

int main(){
	
	char palabras[100];
	int cont = 0;
	
	
	printf("Ingrese una palabra: ");
	scanf("%s", palabras);
	|

	for(int i = 0; palabras[i] != '\0'; i++){

		cont++;

	}
	
	printf("La cantidad de caracteres es de : %d\n", cont);
}
