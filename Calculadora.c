#include <stdio.h>
#include <stdlib.h>

//Realizar un programa que funcione como calculadora de operaciones simples(suma,resta,multiplicacion,division)


int main(){
	
	int a;
	int b;
	int c = 0;
	int menu;
	
	printf("Calculadora: \n  1)Suma\n 2)Resta\n 3)Multiplicacion\n 4)Division\n 5)Salir\n");
	scanf("%d", &menu);
	
	system("cls");
	
	switch(menu){
		case 1:
		
		printf("Ingrese el Valor de a: ");
		scanf("%d", &a);
		printf("Ingrese el Valor de b: ");
		scanf("%d", &b);
		c += a + b;
		
		printf("La suma de los valores es de : %d", c);
		
		break;
		
		case 2:
		
		printf("Ingrese el Valor de a: ");
		scanf("%d", &a);
		printf("Ingrese el Valor de b: ");
		scanf("%d", &b);
		c += a - b;
		
		printf("La resta de los valores es de : %d", c);
		
		break;	
		
		case 3:
			
		printf("Ingrese el Valor de a: ");
		scanf("%d", &a);
		printf("Ingrese el Valor de b: ");
		scanf("%d", &b);
		c += a * b;
		
		printf("La Multiplicacion de los valores es de : %d", c);
		
		break;
		
		case 4:
			
			printf("Ingrese el Valor de a: ");
		scanf("%d", &a);
		printf("Ingrese el Valor de b: ");
		scanf("%d", &b);
		
		
		if(a == 0 || b == 0){
			printf("No se puede dividir por 0");
		}
		
		float resultado = 0;
		
		resultado += a / b;
		
		printf("La division de los valores es de : %f", resultado);
		
		break;
		
		case 5:
			break;
	}
	

return 0;	
}
