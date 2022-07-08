#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz. While it prints FizzBuzz for
 * multiples of both three and five.
 * Return: On success 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
	}

	printf("\n");
	return (0);
}
