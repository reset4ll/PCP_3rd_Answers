#include <stdio.h>
#include <string.h>

char line[100];

int main(int argc, char const *argv[])
{
	printf("Enter a line: ");
	fgets(line, sizeof(line), stdin);

	printf("The length of the line is:  %d\n", strlen(line));
	return 0;
}