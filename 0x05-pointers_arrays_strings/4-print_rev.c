#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int y, len = strlen(s);

	for (y = len - 1; y >= 0; y--)
		_putchar(s[y]);

	_putchar('\n');
}
