/* Exercise 5.6 of Practical C Programming, 3rd Ed.*/
/* Toma los minutos en la entrada */
/* y desglosa el total en horas y minutos.*/
/* A.Esteban, 2015 */

#include <stdio.h>

int minutos, hora, mresto;

int main(int argc, char const *argv[])

{
	printf("Introduce los minutos: ");
	scanf("%d", &minutos);

	// Hacemos un *cast* a los minutos para hacer bien
	// la división, de lo contrario, error.
	hora = (float)minutos / 60.0;

	// Buscamos los minutos restantes... 
	mresto = (minutos % 60);

	printf("El resultado es de: %d horas y %d minutos." , hora, mresto);

	return 0;
}
