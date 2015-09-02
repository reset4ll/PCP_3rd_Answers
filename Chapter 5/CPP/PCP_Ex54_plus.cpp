//* Exercise 5.4 of Practical C Programming, 3rd Ed.
//* Convierte Km/h -> millas/h
//* Fórmula de conversión -> millas=(km*0.6213712)
//* A.Esteban, 2015

#include <iostream>
#include <iomanip>

using namespace std;

#define K 0.6213712

int kilometro;
float milla;

int main(int argc, char const *argv[])

{
	cout << "Introduce los kilometros: ";
	cin >> kilometro;

	milla = (kilometro * K);

	cout << "El resultado en millas es: " << milla << setprecision(2);

	return 0;
}


