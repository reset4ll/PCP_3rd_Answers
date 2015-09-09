//* Exercise 6.5 of Practical C Programming, 3rd Ed. */
//* Determinar si un año es bisiesto o no */
//* Experimentando código ASCII para la letra 'Ñ' */
//* A.Esteban, 2015 */
//*//*//*//*//*//*//*//*//*//*//*//*
//*
//*  ALGORITHM:
//*
//*  if ((year modulo 4 is 0) 
//*  and (year modulo 100 is not 0))
//*  or (year modulo 400 is 0) 
//*
//*  then
//*
//*  leapYear = true;
//*
//*  else
//*
//*  leapYear = false;
//*
//*  end if
//*
//*//*//*//*//*//*//*//*//*//*//*//*

#include <stdio.h>

int year;

int main(int argc, char const *argv[])
{
	printf("Introduce el a%co: ", 164); //* Código ASCII 164.
	scanf("%d", &year);

	//* Aplicando algoritmo y simplificando if's  ;-)
	if (( year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {  

		printf("OK! el a%co es bisiesto.\n", 164);  //* Año bisiesto.
	}

	else {

		printf("Sorry, el a%co no es bisiesto.\n", 164);  //* Año no bisiesto.
	}

	return 0;
}