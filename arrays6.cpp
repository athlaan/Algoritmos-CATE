/*6) Crear un programa en C que pida una cadena de caracteres al usuario y muestre por pantalla la cadena invertida.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n;
	char* letra;
	
	printf("Ingrese la cantidad de caracteres que va a tener: ");
	scanf("%d", &n);
	
	char* palabra[n];
	
	for(int i = 0; i < n; i++){
		
		printf("Ingrese una palabra para invertir:\n ");
		scanf("%s", &letra);
		
		palabra[i] = letra;
		
	}
	
	for(int i = n; i > 0; i--){
		
		printf("La palabra invertida es: %s", palabra[i]);
		
	}
	
}
