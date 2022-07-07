#include <stdio.h>

/**
 * main - first 50 fibonacci number
 *
 * Return: On success 0
 */

int main(void)
{
	long int n1 = 1, result, n2 = 2, nLast = 50;
	int m;

	printf("%lu, %lu, ", n1, n2);
	for (m = 2; m < nLast; m++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lu", result);
		if (m != nLast - 1)
			printf(",");
	}
	printf("\n");
	return (0);
}
