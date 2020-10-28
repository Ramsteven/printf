#include "holberton.h"

/**
 * __reverse - Function reverse
 *@s: array received
 * Return: void
 **/
void __reverse(char s[])
{
	int i, j;
	char c;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

/**
 * _strl - find size of a string
 *@str: string received
 * Return: Size integer
 **/
int _strl(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * __itoa - Converts int to string
 *@n: integer received
 *@s: char received
 * Return : void
 **/
void __itoa(int n, char s[])
{
	int i, sign = n;

	if ((sign) < 0)
		n = -n;

	i = 0;

	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);

	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	__reverse(s);
}
