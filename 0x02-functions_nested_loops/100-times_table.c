#include "main.h"

/**
 * print - prints recursively using _putchar
 * @var: variable to be printed
 */

void print(int var)
{
	if (var / 10)
		print(var / 10);
	_putchar('-' + (var % 10));
}
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: time table to print
 */

void print_times_table(int n)
{
	int num1, num2, mul;

	if (n < 0 || n > 15)
		return;
	for (num1 = 0; num1 <= n; num1++)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			mul = num1 * num2;
			if (num2 == 0)
				_putchar('0' + mul);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + mul);
			}
			else if (mul < 100)
			{
				_putchar(' ');
				print(mul);
			}
			else
			{
				print(mul);
			}
			if (num2 < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
