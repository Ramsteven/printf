int main(int argc, char *argv[])
{
	char co[] = "johan";
	char caracter = 'd';

	_printf(argv[0]);
	_printf("hola %s", co);

	return (0);
}

/**
 * _printf - print function
 *
 * Return:
 *
 **/
int _printf(char *pszFormatString, ...)
{
	int CharacterCount = 0;
	int PrintInteger;
	char IntegerString[10];
	char *pPrintString;
	char pPrintChar;
	va_list Valist;

	va_start(Valist, pszFormatString);

	while (*pszFormatString)
	{
		if (*pszFormatString == '%')
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
				write(1, &pPrintChar, 1);
				pszFormatString++;
				CharacterCount += _strl(pPrintString);
				break;
			}
		}
		else
		{
			write(1, &*pszFormatString, 1);
			pszFormatString++;
			CharacterCount++;
		}
	}
	va_end(Valist);

	return (CharacterCount);
}
