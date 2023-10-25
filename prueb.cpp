/*1- Cual es la diferencia entre un procedimiento y funcion - La diferencia es que la
funcion  devuelve algo , y el procedimiento no devuelve nada
  2-Explicar todo sobre variables
  
   Existen distintos tipos de datos: como el int, char, bool, float y double.
   Una variable es un espacio de memoria donde se almacenan los datos que le ingresa el usuario.
   
  
  
  3- Realizar un programa que permita el ingreso de los datos de un empleado y su salario y me informe cual cobra más y cual cobra menos


*/
#include <stdio.h>
#include <stdlib.h>

struct empleado{
	
	char Nombre[50];
	char Apellido[50];
    char Cargo[50];
	int dni[7];
    int salario;
	
};




int main(){

	struct empleado Empleados[50];
	
	int max = INT_MIN;
	int min = INT_MAX;
	int a;
	
	printf("Ingrese cuantos clientes quiere agregar: ");
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++){
		
		printf("Ingrese el nombre del empleado: ");
		scanf("%s", &Empleados[i].Nombre);
		
	//	printf("Ingrese el Apellido del empleado: ");
	//	scanf("%s", &Empleados[i].Apellido);
		
	//	printf("Ingrese el Cargo del empleado: ");
	//	scanf("%s", &Empleados[i].Cargo);
		
	//	printf("Ingrese el dni del empleado: ");
	//	scanf("%d", &Empleados[i].dni);
		
		printf("Ingrese el salario del empleado: ");
		scanf("%d", &Empleados[i].salario);
	
	}
	
	for(int i = 0; i < a; i++){
		if(Empleados[i].salario > max){
			max = Empleados[i].salario;
		}
		
		if(Empleados[i].salario < min){
			min = Empleados[i].salario;
		}
	}



	//informe(a);
	
	for(int i = 0; i < a; i++){
		
	printf("Nombre del empleado: %s\n ", Empleados[i].Nombre);
	printf("Apellido del empleado: %s\n ", Empleados[i].Apellido);
	printf("Cargo del empleado: %s\n ", Empleados[i].Cargo);
	printf("DNI del empleado: %d\n ", Empleados[i].dni);
	printf("Salario del empleado: %d\n ", Empleados[i].salario);
	}

	printf("El salario Maximo de los empleados es de: %d\n", max);
	printf("El salario Minimo de los empleados es de: %d\n", min);
	
}





