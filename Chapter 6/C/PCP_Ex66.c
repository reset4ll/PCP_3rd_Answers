//* Exercise 6.6 of Practical C Programming, 3rd Ed. */
//* Calcula la paga semanal de un empleado dado */
//* el número de horas trabajadas. */
//* Máximo número de horas semanales son 40 hrs. */
//* Hora extra es el equivalente a 1.5 hr/normal. */
//* A.Esteban, 2015 */

#include <stdio.h>

#define SEMANA 320
#define EXTRA 1.5

int horas;
float salario;

int main(int argc, char const *argv[])
{
	printf("Introduce el n%cmero de horas trabajadas: ", 163);  //* ASCII 'Ú'
	scanf("%d", &horas);										//* Horas.


	if (horas <= 0) {

		printf("Error, horas no computables."); 				 //* Error.
		return -1;
	}

	else {

		printf("Horas = %d horas.\n", horas);
	}

	printf("\nIntroduce el salario por hora trabajada: ");  
	scanf("%f", &salario);										//* Salario.
	printf("Salario = %.2f euros.\n", salario);

	if (horas <= SEMANA) {

		printf("\nEl salario semanal es: %.2f euros.", (float)(salario * horas));
	}

	else {

		printf("\nEl salario semanal con plus EXTRA es: %.2f euros.", (float)(salario * horas * EXTRA));
	}

	return 0;
}

//* SALIDA: 

//* Introduce el número de horas trabajadas: 300
//* Horas = 300 horas.

//* Introduce el salario por hora trabajada: 2.5
//* Salario = 2.50 euros.

//* El salario semanal es: 750.00 euros.

//* -------

//* SALIDA:

//* Introduce el número de horas trabajadas: 500
//* Horas = 500 horas.

//* Introduce el salario por hora trabajada: 2.5
//* Salario = 2.50 euros.

//* El salario semanal con plus EXTRA es: 1875.00 euros. 

