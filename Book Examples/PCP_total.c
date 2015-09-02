/* Example 6.2 of Practical C Programming, 3rd Ed.*/
/* total.c */
/* A.Esteban, 2015 */

#include <stdio.h>

char line[100];
int total, item;

int main(int argc, char const *argv[])
{
	total = 0;

	while (1) {

		printf("Enter # to add \n");
		printf("or 0 to stop: ");

		fgets(line, sizeof(line), stdin);
		sscanf (line, "%d", &item);

		if (item == 0)
			break;

		total += item;
		printf("Total: %d\n", total);

	}
	printf("Final total %d\n", total);
	return 0;
}