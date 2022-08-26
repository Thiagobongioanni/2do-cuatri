/*
 ============================================================================
 Name        : 1-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
caso de que no exista también informarlo.
Ejemplo:
1 5 3 el 3 es del medio
5 1 5 no hay número del medio
3 5 1 el 3 es del medio
3 1 5 el 3 es del medio
5 3 1 el 3 es del medio
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	    int primerNumero;
		int segundoNumero;
		int tercerNumero;

		printf("ingrese un numero: ");
		scanf("%d", &primerNumero);

		printf("ingrese un numero: ");
		scanf("%d", &segundoNumero);

	    printf("ingrese un numero: ");
		scanf("%d", &tercerNumero);

		if(segundoNumero > primerNumero && primerNumero > tercerNumero)
	    {
		   printf("el %d es el del medio \n", primerNumero);
	    }
		else if(primerNumero < tercerNumero && tercerNumero > segundoNumero )
	    {
	       printf("el %d es el del medio \n", segundoNumero);
	    }
		else if(primerNumero < segundoNumero && segundoNumero > tercerNumero)
	    {
	       printf("el %d es el del medio \n", tercerNumero);
	    }
		else
		{
		    printf("no hay numero medio\n ");
		}

	    system("PAUSE");

	return 0;
}
