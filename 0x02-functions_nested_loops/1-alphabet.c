#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * created by: confidenceAhuekwe
 * cc: 6th July, 2022
 *
 * Return: void
 */

void print_alphabet(void)
{
	int low;

	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	_putchar('\n');
}
