/* Exercise 5.1 of Practical C Programming, 3rd Ed.*/
/* Convierte grados Farenheit en grados Centígrados. */
/* Fórmula de conversión -> F=((9/5)*C)+32 */
/* A.Esteban, 2015 */

#include <stdio.h>

int gCent, gFahr;

int main(int argc, char const *argv[])

{
	printf("Introduce los grados Centigrados: ");
	scanf("%d", &gCent);

	gFahr = ((9.0 / 5.0) * gCent) + 32 ;

	printf("Los grados Farenheit son: %d\n", gFahr);


	return 0;
}