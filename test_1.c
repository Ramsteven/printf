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
	if (!format || (format[0] == '%' && _strl(format) == 1))
		return (-1);
	for (; *format; format++)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 's':
				CharacterCount += _string(va_arg(Valist, char*));
				break;
			case 'i':
				CharacterCount += _integer(va_arg(Valist, int));
				break;
			case 'c':
				CharacterCount += _character((char)va_arg(Valist, int));
				break;
			case '!':
			case 'K':
				_character('%');
				_character(*format);
				CharacterCount += 2;
				break;
			case '%':
				_character('%');
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
