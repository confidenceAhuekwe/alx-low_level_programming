#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: parameter of function declared as pointer of type character
 */

void puts_half(char *str)
{
	int prt = strlen(str), x;

	if (prt % 2 == 0)
	{
		for (x = prt / 2; x < prt; x++)
			_putchar(str[x]);
	}
	else
		for (x = (prt / 2) + 1; x < prt; x++)
			_putchar(str[x]);

	_putchar('\n');
}
