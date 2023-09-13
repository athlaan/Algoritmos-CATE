#include <stdio.h>
#include <limits.h>

int main(){
	
	
	int a; 
	int b = 0;
	
	for(int i = 0; i < 10; i++){
		
		printf("Ingrese numeros: ");
		scanf("%d", &a);

		if(a > b){
		b = a;
		
		}
	}
	printf("%d", b);
	
	
	
}
