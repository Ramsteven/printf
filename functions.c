#include "holberton.h"

/**
 * _string - print string
 * @pPrintString: string received
 * Return: char printed
 */
int _string(char *pPrintString)
{
	if (pPrintString == NULL)
	{
		pPrintString = "(null)";
	}

	write(1, pPrintString, _strl(pPrintString));

	return (_strl(pPrintString));
}
/**
 * _integer - integer to string
 * @PrintInteger: integer received
 * Return: char printed
 */
int _integer(int PrintInteger)
{
	char IntegerString[10];

	__itoa(PrintInteger, IntegerString);
	write(1, IntegerString, _strl(IntegerString));

	return (_strl(IntegerString));
}
/**
 * _character - character received
 * @c: character received
 * Return: character printed
 */
int _character(char c)
{
	write(1, &c, 1);

	return (1);
}
