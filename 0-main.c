#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
  *
  *
  *
  *
  **/
 
int _printf( char *pszFormatString, ...);


/** function reverse**/
void __reverse(char s[])
 {
     int i, j;
     char c;
 
     for (i = 0, j = strlen(s)-1; i<j; i++, j--)
     {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }

/**
  *
  *
  *
  *
  **/

/* size string function*/
int _strl(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
  *
  *
  *
  *
  **/

/* int to string */
void __itoa(int n, char s[])
{
     int i, sign;
 
     if ((sign = n) < 0)
		n = -n;

     i = 0;

     do {
         s[i++] = n % 10 + '0'; 
     }while ((n /= 10) > 0);  


     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     __reverse(s);
 }


/**
  *
  *
  *
  *
  **/

int main(int argc, char *argv[])
{
	char co [] = "johan";
	char caracter = 'd';
	
	_printf(argv[0]);
	_printf("hola %s", co);

	return(0);
}

/**
  *
  *
  *
  *
  **/

/* printf function */
int _printf( char *pszFormatString, ...)
{
	int CharacterCount = 0;
	int PrintInteger;
	char IntegerString[10];
	char *pPrintString;
	char pPrintChar;
	va_list Valist;
	/*double PrintDouble;*/

	va_start(Valist, pszFormatString);

	while(*pszFormatString)
	{
		if(*pszFormatString == '%')
		{
			pszFormatString++;


			switch (*pszFormatString)
			{	
				case 's':
					pPrintString = va_arg(Valist, char *);
					write(1, pPrintString, _strl(pPrintString));
					pszFormatString++;
					CharacterCount += _strl(pPrintString);
					break;

				case 'i':
					PrintInteger = va_arg(Valist, int);
					__itoa(PrintInteger, IntegerString);
					write(1, IntegerString, _strl(IntegerString));
					pszFormatString++;
					break;
				

				case 'c':
					pPrintChar =  (char)va_arg(Valist, int);
					/*_putchar(pPrintChar);*/
					write(1, &pPrintChar,1);
                                        pszFormatString++;
                                        CharacterCount += _strl(pPrintString);
                                        break;
		
			}
		}	

		else
		{
			write(1,&*pszFormatString,1);
			pszFormatString++;
			CharacterCount++;

		}
	}

	va_end(Valist);

	return CharacterCount;
}
