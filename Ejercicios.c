#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int opciones;
	int a,b,c; 
	
	printf("----Menu De Ejercicios----\n");
	
	printf("1) Suma\n 2) Promedio\n 3) Conversion de grados Celsius a Fahrenheit\n 4) Area de un rectangulo\n 5) Calcular IVA\n 6) Calcular la hipotenusa\n 7) Numeros pares o impares\n 8) Calculo de Salario\n 9) Descuento\n 10) Calculo de Factorial\n");
	scanf("%d", &opciones);
	
	system("cls");
	switch(opciones){
		
		case 1:
			
			printf("----Suma----\n");
			
			
			int suma = 0;
			
			printf("Ingrese el valor de A: ");
			scanf("%d", &a);
			
			printf("Ingrese el valor de B: ");
			scanf("%d", &b);
		
			suma += a + b;
			printf("La suma de los valores es : %d", suma);
			
			break;
			
		case 2: 
			
			printf("----Promedio----\n");
			
			int acum = 0;
			float prom = 0;
			
			printf("Ingrese el valor de A: ");
			scanf("%d", &a);
			
			printf("Ingrese el valor de B: ");
			scanf("%d", &b);
			
			
			printf("Ingrese el valor de C: ");
			scanf("%d", &c);
			
			acum += a + b + c;
			
			prom += acum / 3;
			
			printf("El promedio de los numeros es de: %f", prom);
			break;
			
		case 3:
				
			printf("----Conversion de grados Celsius a Fahrenheit----\n");
				
			int celsius, fahrenheit = 0;
			
			printf("Ingrese el grado que desea convertir a Fahrenheit: ");
			scanf("%d", &celsius);
			
			fahrenheit += (celsius * 1.8) + 32;
			
			printf("Grados Fahrenheit: %d", fahrenheit);
			
			break;
			
		case 4:
		
			printf("----Area de un rectangulo----\n");
			
			int base, altura, area = 0;
			
			printf("Ingrese la Base: ");
			scanf("%d", &base);
			
			printf("Ingrese la Altura: ");
			scanf("%d", &altura);
			
			area += base * altura;
			
			printf("El area del rectangulo es de : %d", area);
			break;
			
		case 5:
		
			printf("----Calcular IVA----\n");
			
			int precio, iva = 0, sum = 0;
			
			printf("Ingrese un precio para agregarle IVA: ");
			scanf("%d", &precio);
			
			sum += precio * 0.16;
			
			iva += precio + sum;
			
			printf("Precio con iva: %d", iva);
			
			break;
		
		case 6:
			
			printf("----Calcular la hipotenusa----\n");
			
			int hipotenusa = 0;
			
			printf("Ingrese el valor del lado A: ");
			scanf("%d", &a);
			
			printf("Ingrese el valor del lado B: ");
			scanf("%d", &b);
			
			printf("Ingrese el valor del lado C: ");
			scanf("%d", &c);
			
			break;
			
		case 7: 
		
			printf("----Numeros pares o impares----\n");
			
			int d,e,f,g,h,i,j, pares = 0, impares = 0;
			
			printf("Ingrese el primer valor: ");
			scanf("%d", &a);
			
			if(a % 2 == 0){
				pares++;
			}else
			impares++;
			
			printf("Ingrese el segundo valor: ");
			scanf("%d", &b);
			
			if(b % 2 == 0){
			pares++;
			}else
			impares++;
			
			printf("Ingrese el tercero valor: ");
			scanf("%d", &c);
			
			if(c % 2 == 0){
			pares++;
			}else
			impares++;
			
			
			printf("Ingrese el cuarto valor: ");
			scanf("%d", &d);
			
			if(d % 2 == 0){
			pares++;
			}else
			impares++;
			
			
			printf("Ingrese el quinto valor: ");
			scanf("%d", &e);
			
			if(e % 2 == 0){
			pares++;
			}else
			impares++;
			
			
			printf("Ingrese el sexto valor: ");
			scanf("%d", &f);
			
			
			if(f % 2 == 0){
			pares++;
			}else
			impares++;
			
			
			printf("Ingrese el septimo valor: ");
			scanf("%d", &g);
			
			if(g % 2 == 0){
			pares++;
			}else
			impares++;
			
			
			printf("Ingrese el octavo valor: ");
			scanf("%d", &h);
			
			
			if(h % 2 == 0){
			pares++;
			}else
			impares++;
			
			printf("Ingrese el noveno valor: ");
			scanf("%d", &i);
			
			if(i % 2 == 0){
			pares++;
			}else
			impares++;
			
			printf("Ingrese el decimo valor: ");
			scanf("%d", &j);
			
			if(j % 2 == 0){
			pares++;
			}else
			impares++;
				
			printf("Los numeros pares son: %d\n", pares);
			printf("Los numeros impares son: %d\n", impares);
		
			break;
			
		case 8:
	
			printf("----Calculo de salario semana----\n");
			
			int salario = 0;
			
			printf("Ingrese el Salario por hora: ");
			scanf("%d", &a);
			
			printf("Ingrese las horas trabajadas: ");
			scanf("%d", &b);
			
			salario += a * b;
			
			printf("El salario semanal es: %d", salario);
	}
	
}
