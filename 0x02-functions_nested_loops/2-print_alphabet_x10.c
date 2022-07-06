#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int low10 = 0;

	while (low10 < 10)
	{
		int low;

		for (low = 'a'; low <= 'z'; low++)
			_putchar(low);
		_putchar('\n');

		low10++;
	}
}
