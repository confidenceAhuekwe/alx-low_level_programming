#include "main.h"
#include <string.h>

/**
 * rev_string -  reverses a string.
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int c = strlen(s) - 1, d = 0;
	char tmp;

	while (c > d)
	{
		tmp = s[c];
		s[c] = s[d];
		s[d] = tmp;
		c--;
		d++;
	}
}
