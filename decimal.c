#include <stdarg.h>

int _decimal(void)
{
	int n = 10; /* Argumento que pasa el "main"*/
	int i = 1;
	int base;
	int sup = 1;
	int mod = n % 10;
	int aux;

	n /= 10;
	base = n;

	if (base > 0)
	{
		while (base / 10 != 0)
		{
			sup *= 10;
			base /= 10;
		}
		base = n;
		while (sup > 0)
		{
			aux = base / sup;
			putchar(aux + '0');
			base -= (aux * sup);
			sup /= 10;
			i++;
		}
	}
	putchar(mod + '0');
	return (i);
}
