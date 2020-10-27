#include <stdarg.h>
 

int _decimal(void)
{
	int n = 10; /* Argumento que pasa el "main"*/
	int i = 1;
	int sup;
	int rej = 1;
	int mod = n % 10;
	int aux;

	n /= 10;
	sup = n;

	if (sup > 0)
	{
		while (sup / 10 != 0)
		{
			rej *= 10;
			sup /= 10;
		}
		sup = n;
		while (rej > 0)
		{
			aux = sup / rej;
			putchar(aux + '0');
			sup -= (aux * rej);
			rej /= 10;
			i++;
		}
	}
	putchar(mod + '0');
	return (i);
}
