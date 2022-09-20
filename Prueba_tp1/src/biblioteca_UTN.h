/*
 * biblioteca_UTN.h
 *
 *  Created on: 14 sep. 2022
 *      Author: bongi
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "bibliotecaGeneral.h"

#ifndef BIBLIOTECA_UTN_H_
#define BIBLIOTECA_UTN_H_



#endif /* BIBLIOTECA_UTN_H_ */

int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_getNumeroFlotante(float* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_getNombre(char *pResultado,char *mensaje,int tamanio);
