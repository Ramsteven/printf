/*#include "holberton.h"


int main(void)
{
	_printf("hola %i %s", NULL, "mundo");

	return (0);
}*/

/**
 * _printf - print function
 *
 * Return:
 *
 **/
int _printf(char *format, ...)
{
	int CharacterCount = 0;
	int PrintInteger;
	char IntegerString[10];
	char *pPrintString;
	char pPrintChar;
	va_list Valist;

	va_start(Valist, format);
	
	while (*format)	
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{

			case '\0':	
				return(-1);
				break;

			case 's':
				pPrintString = va_arg(Valist, char *);
				write(1, pPrintString, _strl(pPrintString));
				format++;
				CharacterCount += _strl(pPrintString);
				break;

			case 'i':
				PrintInteger = va_arg(Valist, int);
				__itoa(PrintInteger, IntegerString);
				write(1, IntegerString, _strl(IntegerString));
				format++;
				break;

			case 'c':
				pPrintChar =  (char)va_arg(Valist, int);
				/*_putchar(pPrintChar);*/
				write(1, &pPrintChar, 1);
				format++;
				CharacterCount += _strl(pPrintString);
				break;

			case '%':
                                _putchar('%');
                                format++;
                                CharacterCount++;

			}
		}
		else
		{
			write(1, &*format, 1);
			format++;
			CharacterCount++;
		}
	}

	va_end(Valist);

	return (CharacterCount);
}
