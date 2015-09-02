/* Exercise 5.2 of Practical C Programming, 3rd Ed.*/
/* Calcula el volumen de una esfera usando */
/* la función double POW(double, double) */
/* Fórmula de conversión -> V=((4/3)*PI)*(r^3) */
/* A.Esteban, 2015 */

#include <stdio.h>
#include <math.h>

#define PI 3.1416

double rad, rad3;
float vol;

int main(int argc, char const *argv[])

{
	printf("Introduce el radio de la esfera: ");
	scanf("%lf", &rad);

	rad3 = pow (rad, 3.0); 

	vol = ((4.0 / 3.0) * PI) * rad3;  // r^3 

	printf("El volumen de la esfera es: %.2f", vol);

	return 0;
}