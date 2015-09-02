/* Exercise 5.4 of Practical C Programming, 3rd Ed.*/
/* Convierte Km/h -> millas/h */
/* Fórmula de conversión -> millas=(km*0.6213712) */
/* A.Esteban, 2015 */

#include <stdio.h>

#define K 0.6213712

int kilometro;
float milla;

int main(int argc, char const *argv[])
{
	printf("Introduce los kilometros: ");
	scanf("%d", &kilometro);

	milla = (kilometro * K);

	printf("El resultado en millas es de: %.2f", milla);

	return 0;
}