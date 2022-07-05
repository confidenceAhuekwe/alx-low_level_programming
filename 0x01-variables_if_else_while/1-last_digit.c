#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if a random number is positive or negative
 * Return: 0 if there is error
 */

int main(void)
{

	int n;
	int n_Last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_Last = n % 10;

	if (n_Last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n_Last);
	else if (n_Last < 6 && n_Last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_Last);
	else
		printf("Last digit of %d is %d and is 0\n", n, n_Last);

	return (0);
}
