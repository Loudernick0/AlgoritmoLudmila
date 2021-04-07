/*
 * bibliotecaordenamiento.c
 *
 *  Created on: 6 abr. 2021
 *      Author: Julio
 */



#include <stdio.h>
#include <stdlib.h>

int utn_getNumero (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo<=maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
				fflush(stdin);
				scanf("%d",&bufferInt);
				if(bufferInt>= minimo && bufferInt<=maximo)
				{
					*pResultado = bufferInt;
					retorno = 0;
					break;
				}
				else
				{
					printf("%s",mensajeError);
					reintentos--;
				}

		}while(reintentos>=0);

	}

	return retorno;
}
int utn_getFloat (float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
	int retorno = -1;
	float bufferFloat;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo<=maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
				fflush(stdin);
				scanf("%f",&bufferFloat);
				if(bufferFloat>= minimo && bufferFloat<=maximo)
				{
					*pResultado = bufferFloat;
					retorno = 0;
					break;
				}
				else
				{
					printf("%s",mensajeError);
					reintentos--;
				}

		}while(reintentos>=0);

	}

	return retorno;
}
int utn_getcaracter (char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
	int retorno = -1;
	char bufferChar;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo<=maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
				fflush(stdin);
				scanf("%c",&bufferChar);
				if(bufferChar>= minimo && bufferChar<=maximo)
				{
					*pResultado = bufferChar;
					retorno = 0;
					break;
				}
				else
				{
					printf("%s",mensajeError);
					reintentos--;
				}

		}while(reintentos>=0);

	}

	return retorno;
}
int getNumberArray(int Array[],int len)
{
	int i;
	int retorno = -1;
	int buffer;

	if(Array != NULL && len >= 0)
	{

		for(i=0;i<len;i++)
		{
			printf("ingrese un valor");
			fflush(stdin);
			scanf("%d",&buffer);
			Array[i] = buffer;

		}
		retorno = 0;
	}

	return retorno;
}
int printArray(int Array[],int len)
{
	int i;
	int retorno = -1;

	if(Array != NULL && len >= 0)
	{
		for(i=0;i<len;i++)
		{
			printf("el numero de la posicion %d es %d",i,Array[i]);
		}
		retorno = 0;
	}

return retorno;
}

int buscarMinimoenArray(int Array[], int lenght, int* pMinimo, int* pIndiceMinimo)
{
	int i;
	int minimobuffer;
	int indiceminimo;


	for(i=0;i<lenght; i++)
	{
		if(i == 0)
		{
			minimobuffer = Array[i];
			indiceminimo = i;
		}
		else
		{
			if(Array[i]<minimobuffer)
			{
				minimobuffer = Array[i];
				indiceminimo = i;
			}
		}
	}
	*pMinimo = minimobuffer;
	*pIndiceMinimo = indiceminimo;

	return 0;
}
int AlgoritmoLudmila(int Array[],int lenght)
{
	int i;
	int retorno;
	int minimo;
	int indiceMinimo;
	int aux;

	if(Array != NULL && lenght>=0)
	{
		retorno = 0;

		buscarMinimoenArray(Array, 5, &minimo, &indiceMinimo);

		if(i != indiceMinimo)
		{
			for(i=0;i<=(lenght-1);i++)
				{

					aux = Array[i];
					Array[i] = minimo;
					Array[indiceMinimo] = aux;

				}


		}
	}

	return retorno;
}

