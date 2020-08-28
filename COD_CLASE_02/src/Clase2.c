/*
 ============================================================================
 Name        : Clase2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Solicitar al usuario que ingrese una serie de números la cual finaliza al introducir el 999
 (el 999 no debe ser tenido en cuenta para dicho cálculo). Una vez finalizado el ingreso de números
 el programa deberá mostrar el promedio de dichos números por pantalla.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int numero;
	int acumulador=0;
	int contador=0;
	float promedio;
	int resultadoScanf;

	while(1){

		printf("Ingrese su %dº número ",contador+1);
		fflush(stdin);
		resultadoScanf = scanf("%d",&numero);
		while(resultadoScanf == 0){
			printf("Vuelva a ingresar su %dº número ",contador+1);
			fflush(stdin);
			resultadoScanf = scanf("%d",&numero);
		}

		if(numero != 999){
			acumulador += numero;
			contador++;
		}
		else{
			break;
		}

		//printf("contador es %d y el acumulador es %d \n",i,acumulador);
	}

	if(contador==0){
		printf("No se ingresaron números");
	}
	else{
		promedio = (float)acumulador / contador;
		printf("\nEl promedio de los números ingresados es de %.2f",promedio);
	}


	return EXIT_SUCCESS;
}
