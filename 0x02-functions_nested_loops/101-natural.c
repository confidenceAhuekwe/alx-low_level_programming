#include <stdio.h>

/**
 * main - find sum of multiples of 3 and less than 1024
 *
 * Return: On success 0
 */

int main(void)
{
	int num, _sum;

	for (num = 3; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			_sum += num;
	}
	printf("%d\n", _sum);
	return (0);
}
