#include "holberton.h"
/**
 * _printf - print function
 *@format: character gives
 *Return: count characters printed.
 **/
int _printf(char *format, ...)
{
	int CharacterCount = 0, i = 0;
	va_list Valist;

	va_start(Valist, format);
	if (!format || (format[0] == '%' && _strl(format) == 1))
		return (-1);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 's':
				CharacterCount += _string(va_arg(Valist, char*));
				i++;
				break;
			case 'd':
			case 'i':
				CharacterCount += _integer(va_arg(Valist, int));
				i++;
				break;
			case 'c':
				CharacterCount += _character((char)va_arg(Valist, int));
				i++;
				break;
			case '%':
				CharacterCount += _character('%');
				break;
			default:
				CharacterCount += _character('%');
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
