//* Exercise 6.4 of Practical C Programming, 3rd Ed. */
//* Desglosa una cantidad de dinero introducida menor de 1$*/
//* A.Esteban, 2015 */

#include <iostream>

using namespace std;

//* Números mágicos
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int cantidad = 0, tquarters = 0, tdimes = 0, tnickels = 0;
int tpenniesQ = 0, tpenniesD = 0, tpenniesN = 0;

int main(int argc, char const *argv[])
{

	cout <<"Introduce la cantidad de dinero: ";
	cin >> cantidad;

	while (cantidad >= 0 && cantidad <= 101) { 	// *Loop

		{	//* Quarters
			if (cantidad >= QUARTER) 

				tquarters = cantidad / QUARTER;
				tpenniesQ = cantidad % QUARTER;
				tdimes = cantidad / DIME;
				tpenniesD = cantidad % DIME;
				tnickels = cantidad / NICKEL;			
				tpenniesN = cantidad % NICKEL;

			cout << endl << "Desglose de la cantidad introducida: " << endl; 
			cout << endl;
			cout << "Quarters = " << tquarters << " y Pennies = " << tpenniesQ << endl;
			cout << "Dimes = " << tdimes << " y Pennies = " << tpenniesD << endl;
			cout << "Nickels = " << tnickels << " y Pennies = " << tpenniesN << endl;
			cout << "Pennies = " << cantidad << endl;

			return 0;
		}


		{	//* Dimes
			if (cantidad >= DIME)  
				tdimes = cantidad / DIME;
				tpenniesD = cantidad % DIME;
				tnickels = cantidad / NICKEL;			
				tpenniesN = cantidad % NICKEL;

			cout << endl << "Desglose de la cantidad introducida: " << endl;
			cout << endl;	
			cout << "Dimes = " << tdimes << " y Pennies = "  << tpenniesD << endl;
			cout << "Nickels = " << tnickels << " y Pennies = " << tpenniesN << endl;
			
			return 0;
		}


		{	//* Nickels
			if (cantidad >= NICKEL)
				tnickels = cantidad / NICKEL;			
				tpenniesN = cantidad % NICKEL;

			cout << endl << "Desglose de la cantidad introducida: " << endl;
			cout << endl;	
			cout << "Nickels = " << tnickels << " y Pennies = " << tpenniesN << endl;

			return 0;
			
		}

		return 0;
	}

	cout <<"Error, prueba otra vez!";  //* Error.
	return -1;
}