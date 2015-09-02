/* Exercise 5.3 of Practical C Programming, 3rd Ed.*/
/* Calcula el perimetro de un rectángulo. */
/* Fórmula de conversión -> P=2*(ancho+alto) */
/* A.Esteban, 2015 */

#include <stdio.h>

int altura, largo, perimetro;

int main(int argc, char const *argv[])

{
	printf("Introduce la altura y la anchura del rectangulo:  ");
	scanf("%d%d", &altura, &largo);

	perimetro = 2 * (altura + largo);

	printf("El perimetro del rectangulo es: %d", perimetro);

	return 0;
}