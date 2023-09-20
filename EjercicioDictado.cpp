#include <stdio.h>
#include <stdlib.h>

int main() {
    int fabrica;
    int orden;
    int ordenMax = 0;
    int ordenTotal = 0;
    int ordenFa1 = 0;
    int ordenFa2 = 0;
    int ordenFa3 = 0;
    int ordenFa4 = 0;
    int ordenFa5 = 0;
    int ordenFa6 = 0;
    int ordenFa7 = 0;
    int ordenFa8 = 0;

        while (1) {		
		  
		  printf("Seleccione la fabrica: ");
    	  scanf("%d", &fabrica);

		

    	  if (fabrica <= 0 || fabrica >= 9) {
          printf("Ingrese una fabrica entre 1 y 8\n");
          break;
          } else {
		  printf("Ingrese la orden: ");
            scanf("%d", &orden);

            if (orden <= 0 || orden >= 10) {
                printf("Ingrese una orden entre 1 y 9\n");
            } else {
                switch (fabrica) {
                    case 1:
                        if (ordenFa1 == 15) {
                            printf("Se llego al maximo de ordenes\n");
                        } else {
                            ordenFa1++;
                            ordenTotal++;
                            if (ordenFa1 > ordenMax) {
                                ordenMax = ordenFa1;
                            }
                        }
                        break;

                    case 2:
                        if (ordenFa2 == 15) {
                            printf("Se llego al maximo de ordenes\n");
                        } else {
                            ordenFa2++;
                            ordenTotal++;
                            if (ordenFa2 > ordenMax) {
                                ordenMax = ordenFa2;
                            }
                        }
                        break;

                    case 3:
                        if (ordenFa3 == 15) {
                            printf("Se llego al maximo de ordenes\n");
                        } else {
                            ordenFa3++;
                            ordenTotal++;
                            if (ordenFa3 > ordenMax) {
                                ordenMax = ordenFa3;
                            }
                        }
                        break;

                    case 4:
                        if (ordenFa4 == 15) {
                            printf("Se llego al maximo de ordenes\n");
                        } else {
                            ordenFa4++;
                            ordenTotal++;
                            if (ordenFa4 > ordenMax) {
                                ordenMax = ordenFa4;
                            }
                        }
                        break;

                    case 5:
                        if (ordenFa5 == 15) {
                            printf("Se llego al maximo de ordenes\n");
                        } else {
                            ordenFa5++;
                            ordenTotal++;
                            if (ordenFa5 > ordenMax) {
                                ordenMax = ordenFa5;
                            }
                        }
                        break;

                    case 6:
                        if (ordenFa6 == 15) {
                            printf("Se llego al maximo de ordenes\n");
                        } else {
                            ordenFa6++;
                            ordenTotal++;
                            if (ordenFa6 > ordenMax) {
                                ordenMax = ordenFa6;
                            }
                        }
                        break;

                    case 7:
                        if (ordenFa7 == 15) {
                            printf("Se llego al maximo de ordenes\n");
                        } else {
                            ordenFa7++;
                            ordenTotal++;
                            if (ordenFa7 > ordenMax) {
                                ordenMax = ordenFa7;
                            }
                        }
                        break;

                    case 8:
                        if (ordenFa8 == 15) {
                            printf("Se llego al maximo de ordenes\n");
                        } else {
                            ordenFa8++;
                            ordenTotal++;
                            if (ordenFa8 > ordenMax) {
                                ordenMax = ordenFa8;
                            }
                        }
                        break;

                    default:
                        printf("Fabrica no valida\n");
                        break;
                }
            }
        }
    }

    printf("La fabrica 1 tuvo %d trabajos realizados\n", ordenFa1);
    printf("La fabrica 2 tuvo %d trabajos realizados\n", ordenFa2);
    printf("La fabrica 3 tuvo %d trabajos realizados\n", ordenFa3);
    printf("La fabrica 4 tuvo %d trabajos realizados\n", ordenFa4);
    printf("La fabrica 5 tuvo %d trabajos realizados\n", ordenFa5);
    printf("La fabrica 6 tuvo %d trabajos realizados\n", ordenFa6);
    printf("La fabrica 7 tuvo %d trabajos realizados\n", ordenFa7);
    printf("La fabrica 8 tuvo %d trabajos realizados\n", ordenFa8);
    printf("Total de trabajos realizados: %d\n", ordenTotal);
    printf("La fabrica que hizo mas trabajos fue: %d\n", ordenMax);

    return 0;
}
