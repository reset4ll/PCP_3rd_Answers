/* Example 6.1 of Practical C Programming, 3rd Ed.*/
/* fib.c */
/* A.Esteban, 2015 */

#include <stdio.h>

int old_number, current_number, next_number;

int main(int argc, char const *argv[])

{
	old_number = 1;
	current_number = 1;

	printf("Running...\n"); // Start.


	while (current_number < 100) {

		printf("%d\n", current_number);
		next_number = current_number + old_number;

		old_number = current_number;
		current_number = next_number;

	}

	return 0;
}