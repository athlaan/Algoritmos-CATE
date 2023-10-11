/*
Crear un programa que mediante un menú permita consultar, asignar, modificar y
eliminar datos de un vector de tipo entero de veinte posiciones. Para realizar las
operaciones se debe ingresar la posición del vector a la cual se desea acceder.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int dato;
	int nuevoDato;
	int borrarDato = 0;
	int array[20];
	int menu;
	bool salir = false;

while(salir == false){
		
	printf("1) Asignar Dato\n 2) Consultar Dato\n 3) Modificar Valor\n 4) Eliminar Dato\n");
	scanf("%d", &menu);
	


	
	switch(menu){
		
		case 1:
			
			for(int i = 0; i < 20; i++){
				printf("Ingrese un dato para la posicion %d: ", i+1);
				scanf("%d", &dato);
				
				array[i] = dato;
			}
			
			
			
			break;
				
		case 2:
		
			printf("Ingrese el dato para saber la posicion:\n ");
			scanf("%d", &dato);
			
			for(int i = 0; i < 20; i++){
				if(array[i] == dato){
					printf("El dato que se ingreso se encuentra en la posicion: %d\n", i+1);
				}
			}
			
			
			break;
			
		case 3:
			
			printf("Ingrese el dato que quiera modificar\n");
			scanf("%d", &dato);
	
			for(int i = 0; i < 20; i++){
				
				if(array[i] == dato){
					printf("Ingrese el nuevo dato:\n ");
					scanf("%d", &nuevoDato);
					
					array[i] = nuevoDato;
				}
				
			}
			break;
			
		case 4:
		
			printf("Ingrese el dato que quiera Eliminar\n");
			scanf("%d", &dato);
			
			for(int i = 0; i < 20; i++){
				
				if(array[i] == dato){
					printf("Dato eliminado\n");
					array[i] = borrarDato;
				}
				
			}
		
			break;
		
		default:
			printf("Ingrese una opcion valida\n");
			break;	
			
		}
	}
}
