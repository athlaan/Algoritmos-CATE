#include <stdio.h>

int main(){
	
	int num;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	
	for(int i = 1; i < num + 1; i++){
		for(int j = 0; j < i; j++){
			
			printf("* ");
			
			
		}
			printf("\n");
	}
	
	
}
