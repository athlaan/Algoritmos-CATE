#include <stdio.h>

/*Escribe un programa que pida al usuario dos n�meros y calcule la suma de
todos los n�meros entre ellos, incluy�ndolos a ellos mismos.*/


int main(){
	
	int n1;
	int n2;
	int suma = 0;
	
	printf("Ingrese valor um: ");
	scanf("%d", &n1);
	
	printf("Ingrese valor dois: ");
	scanf("%d", &n2);
	
	
	for(int i = n1; i <= n2; i++){
		
		suma += i;
		
		
	}

printf("%d", suma);

}
