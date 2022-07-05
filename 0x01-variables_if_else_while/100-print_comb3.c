#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 * Return: on success 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		int num2;

		for (num2 = num + 1; num2 < 10; num2++)
		{
			putchar((num % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}

	putchar('\n');
	return (0);
}
