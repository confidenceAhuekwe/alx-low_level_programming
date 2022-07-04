#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - entry point
 * return: 1 when successful
 */

int main(void)
{

	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = strlen(text);

	write(2, text, length);
	return (1);
}
