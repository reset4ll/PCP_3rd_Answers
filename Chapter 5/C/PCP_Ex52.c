/* Exercise 5.2 of Practical C Programming, 3rd Ed.*/
/* Calcula el volumen de una esfera.*/
/* Fórmula de conversión -> V=((4/3)*PI)*(r^3) */
/* A.Esteban, 2015 */

#include <stdio.h>

#define PI 3.1416

int rad;
float vol;

int main(int argc, char const *argv[])

{
	printf("Introduce el radio de la esfera: ");
	scanf("%d", &rad);

	vol = ((4.0 / 3.0) * PI) * (rad * rad * rad); /* r^3 */

	printf("El volumen de la esfera es: %.2f", vol);

	return 0;
}