/*
 ============================================================================
 Name        : 1A.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;
}ePais;


/*
 * 1. Dada  una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int),
 *  recuperados(int) y muertos(int). Desarrollar una función llamada actualizarRecuperados que reciba el país y
 *   los recuperados del dia y que acumule estos a los que ya tiene el país. La función no devuelve nada.
 */

int invertirCadena(char cadena[]);
int ordenarCaracteres(char string[]);
//void actualizarRecuperados(ePais pais);
int main(void) {
	setbuf(stdout,NULL);

	char cadena[20] = "joaquin";
	char cadenaDos[10] = "edcab";
	ePais pais = {100,"Argentina", 1000, 500, 10};

	invertirCadena(cadena);
	ordenarCaracteres(cadenaDos);
	puts(cadena);
	puts(cadenaDos);


	return 0;
}
/*
void actualizarRecuperados(ePais pais)
{

}*7

/*
 * 2. Crear una función que se llame invertirCadena que reciba una
 *  cadena de caracteres como parámetro  y su responsabilidad es invertir los caracteres de la misma.
 *   Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU
 */


int invertirCadena(char cadena[])
{
	int retorno= 0;
	int largo;
	char aux;

	largo = strlen(cadena);

	if(cadena!=NULL)
	{
		for(int i=0; i<largo-1; i++)
		{
			for(int j= i+1; j<largo; j++)
			{
				aux = cadena[i];
				cadena[i]= cadena[j];
				cadena[j]=aux;
			}
		}
		retorno = 1;
	}
	return retorno;
}

/*
 * 3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro
 *  y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena.
 *  Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"
 */


int ordenarCaracteres(char string[])
{
	int retorno = 0;
	char aux;
	int largo;

	largo = strlen(string);

	if(string!=NULL)
	{
		for(int i=0; i<largo-1; i++)
		{
			for(int j= i+1; j<largo; j++)
			{
				if(string[i]<string[j])
				aux = string[i];
				string[i]= string[j];
				string[j]=aux;
			}
		}
		retorno = 1;
	}

	return retorno;
}





