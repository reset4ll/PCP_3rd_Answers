//* Exercise 5.5 of Practical C Programming, 3rd Ed.*/
//* Toma los minutos en la entrada */
//* y desglosa el total en horas y minutos.*/
//* A.Esteban, 2015 */

#include <iostream>

using namespace std;

int minutos, hora, mresto;

int main(int argc, char const *argv[])

{
	cout << "Introduce los minutos: ";
	cin >> minutos;

	// Hacemos un *cast* a los minutos para hacer bien
	// la división, de lo contrario, error.
	hora = (float)minutos / 60.0;

	// Buscamos los minutos restantes...
	mresto = (minutos % 60);

	cout << "El resultado es de: " << hora << " horas y " << mresto << " minutos.";
	
	return 0;
}
