#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * Return: 0 when it is successful
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low == 'e' || low == 'q')
			continue;
		putchar (low);
	}
	putchar('\n');
	return (0);
}
