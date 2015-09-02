//* Exercise 5.2 of Practical C Programming, 3rd Ed.*/
//* Calcula el volumen de una esfera usando */
//* la función double POW(double, double) */
//* Fórmula de conversión -> V=((4/3)*PI)*(r^3) */
//* A.Esteban, 2015 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define PI 3.1416

double rad, rad3;
float vol;

int main(int argc, char const *argv[])

{
	cout << "Introduce el radio de la esfera: ";
	cin >> rad;

	rad3 = pow (rad, 3.0);

	vol = ((4.0 / 3.0) * PI) * rad3;  // r^3

	cout << "El volumen de la esfera es: " << vol << setprecision(2)  << endl;

	return 0;
}




