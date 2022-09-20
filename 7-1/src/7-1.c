/*
 ============================================================================
 Name        : 7-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 7-1: Pedirle al usuario su nombre y apellido (en variables separadas, una
para el nombre y otra para el apellido). Ninguna de las dos variables se puede
modificar. Debemos lograr guardar en una tercer variable el apellido y el nombre con
el siguiente formato: Perez, Juan Ignacio usando la siguiente función
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 20

void FormarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto);

int main(void)
{
	setbuf(stdout,NULL);

	char nombre[TAM]={""};
	char apellido[TAM]={""};
	char nombreCompleto[TAM];
	int largoNombre;
	int largoApellido;

	     printf("ingrese su nombre: ");
	     fflush(stdin);
	     fgets(nombre,TAM,stdin);
	     largoNombre=strlen(nombre);
	     nombre[largoNombre-1]='\0';

	     printf("ingrese su apellido: ");
	     fflush(stdin);
	     fgets(apellido,TAM,stdin);
	     largoApellido=strlen(apellido);
         apellido[largoApellido-1]='\0';

	     FormarApellidoNombre(nombre,apellido,nombreCompleto);

	     printf("el nombre completo es: %s",nombreCompleto);

	return 0;
}
void FormarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto)
{
     int largo;

	 strcpy(pCompleto,pApellido);
	 strcat(pCompleto,", ");
	 strcat(pCompleto,pNombre);
	 largo = strlen(pCompleto);

	 strlwr(pCompleto);

	 	 pCompleto[0] = toupper(pCompleto[0]);

	 	 for(int i=0;i<largo;i++)
	 	 {
	 		 if(isspace(pCompleto[i]))
	 		 {
	             i++;
	             pCompleto[i] = toupper(pCompleto[i]);
	 		 }

	 	 }
}
