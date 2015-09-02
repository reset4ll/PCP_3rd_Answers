/* Exercise 5.5 of Practical C Programming, 3rd Ed.*/
/* Toma las horas y minutos en la entrada */
/* y devuelve el total de minutos. */
/* A.Esteban, 2015 */

#include <stdio.h>

int horas, minutos, total;

int main(int argc, char const *argv[])

{
	printf("Introduce las horas y minutos:  ");
	scanf("%d%d", &horas, &minutos);

	total = (horas * 60) + minutos;

	printf("El total de minutos es: %d", total);

	return 0;
}

