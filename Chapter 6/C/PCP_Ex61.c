/* Exercise 6.1 of Practical C Programming, 3rd Ed. */
/* Calculate the actual distance between two points. */
/* A.Esteban, 2015 */

#include <stdio.h>
#include <math.h>

int xa, xb, ya, yb, oper1, oper2;
float oper_X, oper_Y, oper_Z, distancia;


int main(int argc, char const *argv[])
{
	// Point A
	printf("Introduce coordenates point A: ");
	scanf("%d%d", &xa, &ya);

	// Point B
	printf("Introduce coordenates point B: ");
	scanf("%d%d", &xb, &yb);

	printf("Point A is: (%d,%d)\n", xa, ya);
	printf("Point B is: (%d,%d)\n", xb, yb);

	// oper_X
	oper1 = (xa - xb);
	oper_X = pow(oper1, 2);
	
	// oper_Y
	oper2 = (ya - yb);
	oper_Y = pow(oper2, 2);
	
	// oper_Z
	oper_Z = (oper_X + oper_Y);
	distancia = sqrt(oper_Z);
	printf("The actual distance between A and B is: %.4f", distancia);

	return 0;
}

