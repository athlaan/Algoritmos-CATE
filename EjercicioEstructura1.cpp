
/*Realizar un programa que permite tener el control de alquileres de un videoclub, teniendo en cuenta que un cliente puede llevarse más de una pelicula
el sistema debe permitir algoritmo de alta baja modificacion ABM.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct peliculas{
	int id;
	char nombre[50];
	char genero[50];
	float duracion;
	int stock;

};

struct cliente{
	
	int idCliente[50];
	char nombre[50];
	char devolvio[50];
	
	struct peliculas pelicula;
};


struct Alquilar{
	struct cliente CLIENTES[10];
	struct peliculas PELICULA[10];
};

int main(){
	
	struct cliente CLIENTE[10];
	struct peliculas PELICULA[10];
	struct Alquilar alquilar[10];
	int usur;
	int peli;
	int alq;
	int eliminado = 0;
	int op;
	
	while(1){	

	printf("1) Agregar nuevo usuario.\n 2) Agregar nueva pelicula.\n 3) Alquilar pelicula.\n 4) Borrar Usuario.\n 5) Mostrar Clientes con peliculas alquiladas.\n");
	scanf("%d", &op);	
	system("cls");
	
		switch(op){
			case 1:

			
				printf("Cuantas personas quiere agregar: ");
				scanf("%d", &usur);
				
				for(int i = 0; i < usur; i++){

				
				printf("Ingrese el id del cliente %d: ", i+1);
				scanf("%d", &CLIENTE[i].idCliente);
	
				printf("Ingrese el nombre del cliente %d: ", i+1);
				scanf("%s", &CLIENTE[i].nombre);
	
				printf("Ingrese si devolvio el cliente la pelicula: ");
				scanf("%s", &CLIENTE[i].devolvio);
					
					system("cls");
			};
				break;
			case 2:
			
				printf("Cuantas peliculas quiere agregar: ");
				scanf("%d", &peli);
				
				for(int i = 0; i < peli; i++){
				
				printf("Ingrese el id de la pelicula %d: ", i+1);
				scanf("%d", &PELICULA[i].id);
	
				printf("Ingrese el nombre de la pelicula: ");
				scanf("%s", &PELICULA[i].nombre);
	
				printf("Ingrese el genero de la pelicula: ");
				scanf("%s", &PELICULA[i].genero);
	
				printf("Ingrese la duracion de la pelicula: ");
				scanf("%f", &PELICULA[i].duracion);

				printf("Ingrese el stock de la pelicula: ");
				scanf("%d", &PELICULA[i].stock);
				
					system("cls");
			};
				break;
			case 3:
				
				printf("Cuantas peliculas quiere alquilar: ");
				scanf("%d", &alq);
				
				for(int i = 0; i < alq; i++){
					
				printf("Ingrese el ID del cliente: ");
				scanf("%d", &alquilar[i].CLIENTES[10].idCliente);
					
				printf("Ingrese el ID de la pelicula: ");
				scanf("%d", &alquilar[i].PELICULA[10].id);
					
					
				};
					
				break;
			case 4:
		
		
			   printf("Ingrese el id del cliente que quiere borrar: ");
                int idAEliminar;
                scanf("%d", &idAEliminar);
                eliminado = 0;

                for (int i = 0; i < usur; i++) {
                    if (CLIENTE[i].idCliente == idAEliminar) {
                        printf("Se eliminó el usuario.\n");
                        eliminado = 1;
                        // Aquí podrías mover los elementos para llenar el espacio vacío
                        // y reducir la cantidad de usuarios si lo deseas.
                    }
                };
		
			
			/*	int borrar;
				printf("Ingrese el idDelCliente que quiere borrar");
				scanf("%d", &borrar);
				
				for(int i = 0; i < usur; i++){
					
					if(CLIENTE[i].idCliente == borrar){
					printf("Se elimino el usuario.\n");
					eliminado = 1;
											
				}
					
			};*/
			
				
				break;
				
			case 5:
				
			printf("Clientes: ");

			for (int i = 0; i < alq; i++) {
   			printf("Nombre Del cliente: %s\n Id del cliente: %d\n", alquilar.CLIENTES[i].nombre, alquilar.CLIENTES[i].idCliente);
   		
		   	printf("Nombre de la pelicula: %s\n Id de la pelicula: %d\n", alquilar.PELICULA[i].nombre, alquilar.PELICULA[i].id);
			
			};
	

				
				break;
				
			default:
				system("cls");
				printf("Ingrese una opcion valida\n");
				break;
			
		}
	}

	
	
	//printf("ID: %d NOMBRE: %s DEVOLVIO: %d\n", CLIENTE3[i].idCliente, CLIENTE3[i].nombre, CLIENTE3[i].devolvio);
	
	/*printf("ID: %d\n", PELICULA3.id);
	printf("NOMBRE: %s\n", PELICULA3.nombre);
	printf("GENERO: %s\n", PELICULA3.genero);
	
	printf("DURACION: %f STOCK: %d\n", PELICULA3.duracion, PELICULA3.stock);*/
	
	
}
