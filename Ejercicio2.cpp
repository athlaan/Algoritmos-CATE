#include <stdio.h>

int main(){
	
	int numero;

	
	printf("Ingrese un numero para multiplicarlo hasta 10: ");
	scanf("%d", &numero);
	
	for(int i = 1; i <= 10; i++){
		
		int multiplicacion = numero*i;
		
		printf("%d\n", multiplicacion);
		
	}
	
	
}
