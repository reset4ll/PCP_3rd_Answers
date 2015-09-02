//* Exercise 6.1 of Practical C Programming, 3rd Ed. */
//* Calculate the actual distance between two points. */
//* A.Esteban, 2015 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double xa, xb, ya, yb, oper1, oper2;
float oper_X, oper_Y, oper_Z, distancia;

int main(int argc, char const *argv[])
{
	// Point A
	cout << "Introduce coordenates point A: ";
	cin >> xa >> ya;

	// Point B
	cout << "Introduce coordenates point B: ";
	cin >> xb >> yb;

	cout << "Point A is: (" << xa << "," << ya << ")" << endl;
	cout << "Point B is: (" << xb << "," << yb << ")" << endl;

	// oper_X
	oper1 = (xa - xb);
	oper_X = pow(oper1, 2.0);

	// oper_Y
	oper2 = (ya - yb);
	oper_Y = pow(oper2, 2.0);

	// oper_Z
	oper_Z = (oper_X + oper_Y);
	distancia = sqrt(oper_Z); 
	cout << "The actual distance between A and B is: " << setprecision(5) << distancia;

	return 0;
}
