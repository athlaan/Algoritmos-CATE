
/*Realizar un programa que permite tener el control de alquileres de un videoclub, teniendo en cuenta que un cliente puede llevarse más de una pelicula
el sistema debe permitir algoritmo de alta baja modificacion ABM.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct clipeli{
	
	int id;
	int idCliente;
		
};



struct cliente{
	
	int idCliente;
	char nombre[50];
	int devolvio;
	
	struct clipeli Relacion;
};

struct peliculas{
	int id;
	char nombre[50];
	char genero;
	float duracion;
	int stock;
	
	struct clipeli Relacion2;
};


int main(){
	
	struct cliente CLIENTE3;
	struct peliculas PELICULA3;
	
	
	printf("Ingrese el id del cliente: ");
	scanf("%d", &CLIENTE3.idCliente);
	
	printf("Ingrese el nombre del cliente: ");
	scanf("%s", &CLIENTE3.nombre);
	
	printf("Ingrese el devolvio del cliente: ");
	scanf("%d", &CLIENTE3.devolvio);
		
	
	printf("Ingrese el id de la pelicula: ");
	scanf("%d", &PELICULA3.id);
	
	printf("Ingrese el nombre de la pelicula: ");
	scanf("%s", &PELICULA3.nombre);
	
	printf("Ingrese el genero de la pelicula: ");
	scanf("%s", &PELICULA3.genero);
	
	printf("Ingrese la duracion de la pelicula: ");
	scanf("%f", &PELICULA3.duracion);

	printf("Ingrese el stock de la pelicula: ");
	scanf("%d", &PELICULA3.stock);
	
	
	
	printf("ID: %d NOMBRE: %s DEVOLVIO: %d\n", CLIENTE3.idCliente, CLIENTE3.nombre, CLIENTE3.devolvio);
	
	printf("ID: %d NOMBRE: %s GENERO: %s DURACION: %f STOCK: %d\n", PELICULA3.id, PELICULA3.nombre, PELICULA3.genero, PELICULA3.duracion, PELICULA3.stock);
	
	
}
