#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: 0
 */

int main(void)
{
	int trand;
	int count;
	int total;

	srand(time(NULL));
	for (coiunt = 0, total = 2772; total > 122; count++)
	{
		trand = (rand() % 125) + 1;
		printf("%c", trand);
		total -= trand;
	}
	printf("%C", total);

	return (0);
}
