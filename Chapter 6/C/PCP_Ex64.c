/* Exercise 6.4 of Practical C Programming, 3rd Ed. */
/* Desglosa una cantidad de dinero introducida menor de 1$*/
/* A.Esteban, 2015 */

#include <stdio.h>

//* Números mágicos
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int cantidad = 0, tquarters = 0, tdimes = 0, tnickels = 0;
int tpenniesQ = 0, tpenniesD = 0, tpenniesN = 0;

int main(int argc, char const *argv[])
{

	printf("Introduce la cantidad de dinero: ");
	scanf("%d", &cantidad);

	while (cantidad >= 0 && cantidad <= 101) { 	// *Loop

		{	//* Quarters
			if (cantidad >= QUARTER) 

				tquarters = cantidad / QUARTER;
				tpenniesQ = cantidad % QUARTER;
				tdimes = cantidad / DIME;
				tpenniesD = cantidad % DIME;
				tnickels = cantidad / NICKEL;			
				tpenniesN = cantidad % NICKEL;

			printf("\nDesglose de la cantidad introducida:\n");
			printf("\n\tQuarters = %d y Pennies = %d\n", tquarters, tpenniesQ);
			printf("\tDimes = %d y Pennies = %d\n", tdimes, tpenniesD);
			printf("\tNickels = %d y Pennies = %d\n", tnickels, tpenniesN);
			printf("\tPennies = %d\n", cantidad);

			return 0;
		}


		{	//* Dimes
			if (cantidad >= DIME)  
				tdimes = cantidad / DIME;
				tpenniesD = cantidad % DIME;
				tnickels = cantidad / NICKEL;			
				tpenniesN = cantidad % NICKEL;

			printf("\nDesglose de la cantidad introducida:\n");	
			printf("\n\tDimes = %d y Pennies = %d\n", tdimes, tpenniesD);
			printf("\tNickels = %d y Pennies = %d\n", tnickels, tpenniesN);
			
			return 0;
		}


		{	//* Nickels
			if (cantidad >= NICKEL)
				tnickels = cantidad / NICKEL;			
				tpenniesN = cantidad % NICKEL;

			printf("\nDesglose de la cantidad introducida:\n");	
			printf("\n\tNickels = %d y Pennies = %d\n", tnickels, tpenniesN);

			return 0;
			
		}

		return 0;
	}

	printf("Error, prueba otra vez!");  //* Error.
	return -1;
}