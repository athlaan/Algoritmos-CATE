#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	srand(time(NULL));

	int random = rand() % 100 + 1;
	int n;
	
	while(n != random){
		
		printf("Adivina el numero entre 1 y 100: ");
		scanf("%d", &n);
		
		if(n < 0 || n > 100){
			printf("Ingrese un numero entre 1 y 100");
		}
		
		printf("No es el numero\n");	
		
	}
	
	printf("Adivinaste el numero !!!");	
	
}
