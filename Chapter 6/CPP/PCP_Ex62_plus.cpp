//* Exercise 6.2 of Practical C Programming, 3rd Ed. */
//* Assign grades to % rights. (IF Control Statements) */
//* A.Esteban, 2015 */

#include <iostream>

using namespace std;

int rights;

int main(int argc, char const *argv[])

{
	cout << "Introduce your rights numbers: ";
	cin >> rights;

	if ( rights < 0 || rights > 100)		 	// Error
		cout << "Error, try again...";

	else if (rights <= 60) 						// Grade F
		cout << "Too bad, your grade is F";

	else if (rights <= 70) 						// Grade D
		cout << "Your grade is D";

	else if (rights <= 80) 						// Grade C
		cout << "Your grade is C";

	else if (rights <= 90) 						// Grade B
		cout << "Your grade is B";

	else if (rights <= 100) 					// Grade A
		cout << "Congrats!, your grade is A";

	return 0;
}