/* Exercise 6.3 of Practical C Programming, 3rd Ed. */
/* Assign grades (+,-) to % rights. (IF Control Statements) */
/* Last digit 1-3 -> Modifier (-) */
/* Digit between 4-7 -> Modifier (blank) */
/* Last digit 8-0 -> Modifier (+) */
/* A.Esteban, 2015 */

//******************************************
// TABLE OF NUMBERS:
// (Between 0-60 -> Grade F
//
// (Between 61-70 -> Grade D)
// Numbers D-    Numbers ==     Numbers D+
// (61,62,63 ... 64,65,66,67 ... 68,69,70)
//
// (Between 71-80 -> Grade C)
// Numbers C-    Numbers ==     Numbers C+
// (71,72,73 ... 74,75,76,77 ... 78,79,80)
//
// (Between 81-90 -> Grade B)
// Numbers B-    Numbers ==     Numbers B+
// (81,82,83 ... 84,85,86,87 ... 88,89,90)
//
// (Between 91-100 -> Grade A)
// Numbers A-    Numbers ==     Numbers A+
// (91,92,93 ... 94,95,96,97 ... 98,99,100)
//******************************************

#include <stdio.h>

int rights;

int main(int argc, char const *argv[])
{
	printf("Introduce your rights numbers: ");
	scanf("%d", &rights);

	if (rights < 0 || rights > 100)		 	  // Error
		printf("Error, try again...");

	else if (rights <= 60)     				  // Grade F
		printf("Too bad, your grade is F");

	else if (rights <= 63)  				  // Grade D-
		printf("Your grade is D-");
	else if (rights <= 67)			 		  // Grade D
		printf("Your grade is D");
	else if (rights <= 70) 	 				  // Grade D+
		printf("Your grade is D+");

	else if (rights <= 73)  				  // Grade C-
		printf("Your grade is C-");
	else if (rights <= 77) 			 		  // Grade C
		printf("Your grade is C");
	else if (rights <= 80) 	 				  // Grade C+
		printf("Your grade is C+");

	else if (rights <= 83)  				  // Grade B-
		printf("Your grade is B-");
	else if (rights <= 87) 					  // Grade B
		printf("Your grade is B");
	else if (rights <= 90) 	 				  // Grade B+
		printf("Your grade is B+");

	else if (rights <= 93)  				  // Grade A-
		printf("Your grade is A-");
	else if (rights <= 97) 			          // Grade A
		printf("Your grade is A");
	else if (rights <= 100) 	              // Grade A+
		printf("Your grade is A+");

	return 0;
}