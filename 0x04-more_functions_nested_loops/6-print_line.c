#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: argument of the Function of type integer
 */

void print_line(int n)
{
	int z;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (z = 0; z < n; z++)
			_putchar(95);
		_putchar('\n');
	}
}
