/*
 ============================================================================
 Name        : 3-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.
int Restar1(int, int);
int Restar2(void);
void Restar3(int, int);
 void Restar4(void);

 */

#include <stdio.h>
#include <stdlib.h>

int Restar1(int numero1, int numero2);
int main(void)
{
	setbuf(stdout,NULL);

	int numero1;
	int numero2;
	int numero3;
	int resultado=0;

	    printf("ingrese el primer numero: ");
	    scanf("%d",&numero1);

	    printf("ingrese el primer numero: ");
	    scanf("%d",&numero2);

	    printf("ingrese el primer numero: ");
	    scanf("%d",&numero3);

	    resultado=Restar1(numero1,numero2);
	    printf("%d ",resultado);

	return 0;
}
int Restar1(int numero1, int numero2)
{
	int retorno;

	retorno=numero1-numero2;

	return retorno;
}
