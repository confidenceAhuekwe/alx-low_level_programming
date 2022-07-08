#include "main.h"
/**
 * print_most_numbers - print all numbers except 2 and 4
 * Return: 0 on success.
 */
void print_most_numbers(void)
{
	int a = 0;

	do {
		if (a != 2 && a != 4)
			_putchar(a + '0');
		a++;
	} while (a < 10);
	_putchar('\n');
}
