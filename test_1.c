#include "holberton.h"
/**
 * _printf - print function
 *@format: character gives
 *Return: count characters printed.
 **/
int _printf(char *format, ...)
{
	int CharacterCount = 0;
	va_list Valist;
	int i = 0;

	va_start(Valist, format);
	if (!format || (format[0] == '%' && _strl(format) == 1))
		return (-1);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 's':
				CharacterCount += _string(va_arg(Valist, char*));
				break;
			case 'd':
			case 'i':
				CharacterCount += _integer(va_arg(Valist, int));
				break;
			case 'c':
				CharacterCount += _character((char)va_arg(Valist, int));
				break;
			case '%':
				CharacterCount += _character('%');
				break;
			default:
				CharacterCount += _character('%');
				CharacterCount += _character(format[i]);
				break;
			}
		}
		else
		{
			CharacterCount += _character(format[i]);
		}
	}
	va_end(Valist);
	return (CharacterCount);
}
