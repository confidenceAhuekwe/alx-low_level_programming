#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if program does not receive two arguments, Otherwise 0.
 */

int main(int argc, char **argv)
{
	int i, j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);

	return (0);
}
