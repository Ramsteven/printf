#include "holberton.h"

/**
  *_string- print string
  *@pPrintString: string received
  *Return: character printed
  **/
int _string(char *pPrintString)
{
	write(1, pPrintString, _strl(pPrintString));

	return (_strl(pPrintString));
}
/**
  *_integer- integer to string
  *@PrintInteger: integer received
  *Return: charater printed
  **/
int _integer(int PrintInteger)
{
	char IntegerString[10];

	__itoa(PrintInteger, IntegerString);
	write(1, IntegerString, _strl(IntegerString));

	return (_strl(IntegerString));
}
/**
  *_character-character received
  *@c: character received
  *Return: character printed
  **/
int _character(char c)
{
	write(1, &c, 1);

	return (1);
}
