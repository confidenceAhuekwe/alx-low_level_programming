#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: on success 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num >= 0 && num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			continue;
	}
	putchar('\n');
	return (0);
}
