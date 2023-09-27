/*6)Crear un programa en c, que pida una cadena de caracteres al usuario y muestre por pantalla la cadena invertida*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char palabra[100];
	
	printf("Ingrese una palabra para invertir:\n ");
	scanf("%s", palabra);

	for(int i = 3; i >= 0; i--){
		
		printf("La palabra invertida es: %c\n", palabra[i]);
		
	}
	
	
}
