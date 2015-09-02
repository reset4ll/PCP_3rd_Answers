/* Exercise 6.2 of Practical C Programming, 3rd Ed. */
/* Assign grades to % rights. (IF Control Statements) */
/* A.Esteban, 2015 */

#include <stdio.h>

int rights;

int main(int argc, char const *argv[])

{
	printf("Introduce your rights numbers: ");
	scanf("%d", &rights);

	if ( rights < 0 || rights > 100)		 	// Error
		printf("Error, try again...");

	else if (rights <= 60) 						// Grade F
		printf("Too bad, your grade is F");

	else if (rights <= 70) 						// Grade D
		printf("Your grade is D");

	else if (rights <= 80) 						// Grade C
		printf("Your grade is C");

	else if (rights <= 90) 						// Grade B
		printf("Your grade is B");

	else if (rights<= 100) 						// Grade A
		printf("Congrats!, your grade is A");

	return 0;
}