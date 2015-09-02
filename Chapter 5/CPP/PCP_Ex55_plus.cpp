//* Exercise 5.5 of Practical C Programming, 3rd Ed.*/
//* Toma las horas y minutos en la entrada */
//* y devuelve el total de minutos. */
//* A.Esteban, 2015 */

#include <iostream>

using namespace std;

int horas, minutos, total;

int main(int argc, char const *argv[])

{
	cout << "Introduce las horas y minutos: ";
	cin >> horas >> minutos;

	total = (horas * 60) + minutos;

	cout << "El total de minutos es: " << total;

	return 0;
}