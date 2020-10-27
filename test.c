#include "holberton.h"

/**
 * __reverse - Function reverse
 *
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
 *
 * Return: Size integer
 **/
int _strl(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * __itoa - Converts int to string
 *
 * Return : void
 **/
void __itoa(int n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)
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
