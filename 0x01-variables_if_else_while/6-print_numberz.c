#include <stdio.h>

/**
 * main - output all single digit numbers of base 10 using putchar
 * Return: on success 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
