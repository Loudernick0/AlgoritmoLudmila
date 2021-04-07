/*
 ============================================================================
 Name        : AlgoritmoOrdenamientoLudmila.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : AlgoritmoLudmila.c
 Author      : yo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaordenamiento.h"

#define sizeArray 5

int main(void)
{
	setbuf(stdout,NULL);


	int minimo;
	int indiceDelMinimo;
	int ArrayValores [sizeArray] = {80,23,5,8,10};


	AlgoritmoLudmila(ArrayValores , sizeArray);

	printArray(ArrayValores, sizeArray);





	return EXIT_SUCCESS;
}
