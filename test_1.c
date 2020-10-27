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

	va_start(Valist, format);

	if (!format)
		return (-1);
	for (; *format; format++)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{

			case '\0':
				return (-1);
			case 's':
				CharacterCount += _string(va_arg(Valist, char*));
				break;
			case 'i':
				CharacterCount += _integer(va_arg(Valist, int));
				break;
			case 'c':
				CharacterCount += _character((char)va_arg(Valist, int));
				break;
			case '%':
				CharacterCount += _character('%');
				break;
			}
		}
		else
		{
			CharacterCount += _character(*format);
		}
	}
	va_end(Valist);

	return (CharacterCount);
}
