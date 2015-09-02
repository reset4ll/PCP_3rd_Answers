#include <stdio.h>
#include <string.h>

char first[100];
char last[100];
char full[200];

int main(int argc, char const *argv[])
{
	printf("Introducir nombre: ");
	fgets(first, sizeof(first), stdin);

	printf("Introducir apellido: ");
	fgets(last, sizeof(last), stdin);

	strcpy(full, first);
	strcat(full, last);

	printf("El nombre completo es:\n");
	printf("%s\n", full );

	return 0;
}