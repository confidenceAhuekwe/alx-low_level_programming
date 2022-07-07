#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @last: variable name for the number containing last digit
 * Return: the last digit
 */

int print_last_digit(int last)
{
	int result;

	if (last < 0)
		result = -1 * (last % 10);
	else
		result = last % 10;

	_putchar((result) + '0');
	return (result);
}
