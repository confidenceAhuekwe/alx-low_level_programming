#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0if there is error
 */

int main(void)
{

	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
