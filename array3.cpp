/*3) Crear un programa que solicite al usuario llenar un vector entero de n posiciones. 
y luego crear un menu para buscar un numero del vector, indicando por consola que se a encontrado o no, 
y en el caso de encontrarse en que posicion se encuentra*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n;
	int dato;
	int menu;
	bool salida = false;
	bool existe = false;

	printf("Ingrese la cantidad de posiciones:\n ");
	scanf("%d", &n);
	int array[n];
	
	for(int i = 0; i < n; i++){
		printf("Ingrese el valor para la posicion %d :", i+1);
		scanf("%d", &dato);
		array[i] = dato;		
	}
	
	while(salida == false){
		
		printf("Eliga la opcion que quiere\n ");
		
		printf("1)Buscar Datos\n 2)Salir\n");
		
		scanf("%d", &menu);
		
		switch(menu){
		
		case 1:
			
			existe = false;
			
			printf("Ingrese un dato: ");
			scanf("%d", &dato);
			
			for(int i = 0; i < n; i++){
				if(array[i] == dato){
					existe = true;
					printf("La posicion del dato es: %d\n", i+1);
					break;
				}
			}
			
			if(existe == false){
				printf("No se encontro el dato\n");
			}
			
			break;
			
		case 2:
			salida = true;
			break;
			
		default:
			printf("La opcion no existe\n");
			break;
		
		}
	}
	
	
	//Pedir cantidad de posiciones(n)
	//Declarar array con esa cantidad de posiciones(n)
	//Pedir por cada posicion un numero y almacenarlo en ese array
	//Crear un menu
	
	
}

