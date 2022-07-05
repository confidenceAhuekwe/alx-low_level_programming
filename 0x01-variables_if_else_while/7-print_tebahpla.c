#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: on success 0
 */

int main(void)
{
	char lowr;

	for (lowr = 'z'; lowr >= 'a'; lowr--)
	{
		putchar(lowr);
	}
	putchar('\n');
	return (0);
}
