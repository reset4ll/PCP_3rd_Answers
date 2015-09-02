//* Exercise 5.1 of Practical C Programming, 3rd Ed.*/
//* Convierte grados Farenheit en grados Centígrados. */
//* Fórmula de conversión -> F=((9/5)*C)+32 */
//* A.Esteban, 2015 */

#include <iostream>

using namespace std;

int gCent, gFahr;

int main(int argc, char const *argv[])

{
	cout << "Introduce los grados Centigrados: ";
	cin >> gCent;

	gFahr = ((9.0 / 5.0) * gCent) + 32 ;

	cout << "Los grados Farenheit son: " << gFahr << endl;


	return 0;
}