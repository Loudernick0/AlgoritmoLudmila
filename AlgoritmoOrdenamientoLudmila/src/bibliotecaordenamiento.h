/*
 * bibliotecaordenamiento.h
 *
 *  Created on: 6 abr. 2021
 *      Author: Julio
 */

#ifndef BIBLIOTECAORDENAMIENTO_H_
#define BIBLIOTECAORDENAMIENTO_H_

int utn_getNumero (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getFloat (float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
int utn_getcaracter (char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);
int getNumberArray(int Array[], int len);
int buscarMinimoenArray(int Array[], int lenght, int* pMinimo, int* pIndiceMinimo);


#endif /* BIBLIOTECAORDENAMIENTO_H_ */
