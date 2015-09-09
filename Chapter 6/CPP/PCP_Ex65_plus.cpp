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

#include <iostream>

using namespace std;

int year;

int main(int argc, char const *argv[])
{
	cout << "Introduce el a\244o: ";  //* Código OCTAL '\244' para letra 'Ñ'
	cin >> year;

	//* Aplicando algoritmo y simplificando if's  ;-)
	if (( year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {

		cout << "OK! el a\244o es bisiesto." << endl;  //* Año bisiesto.
	}

	else {

		cout << "Sorry, el a\244o no es bisiesto." << endl; //* Año no bisiesto.
	}

	return 0;
}