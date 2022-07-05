#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercas and in uppercase
 * Return: 0 when it is successful
 */

int main(void)
{
	char low;
	char upp;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (upp = 'A'; upp <= 'Z'; upp++)
	{
		putchar(upp);
	}

	putchar('\n');
	return (0);
}
