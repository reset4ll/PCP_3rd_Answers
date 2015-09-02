//* Exercise 5.3 of Practical C Programming, 3rd Ed.
//* Calcula el perimetro de un rectángulo. 
//* Fórmula de conversión -> P=2*(ancho+alto) 
//* A.Esteban, 2015 

#include <iostream>
#include <iomanip>

using namespace std;

int altura, largo, perimetro;

int main(int argc, char const *argv[])
{
	cout << "Introduce la altura y anchura del rectangulo:  ";
	cin >> altura >> largo;

	perimetro = 2 * (altura + largo);

	cout << "El perimetro del rectangulo es: " << perimetro << setprecision(2);

	return 0;
}