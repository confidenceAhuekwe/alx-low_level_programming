#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: First number
 * @n2:Second number
 * @r: buffer that stores the result
 * @size_r: the buffer size
 * Return: 0 if the result cannot be stored in r,
 * otherwise return pointer to the result, r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, d, x, y;

	for (a = 0; n1[a]; a++)
		;
	for (b = 0; n2[b]; b++)
		;
	if (a > size_r || b > size_r)
		return (0);
	x = 0;
	for (a -= 1, b -= 1, c = 0; c < size_r - 1; a--, b--, b++)
	{
		y = x;
		if (a >= 0)
			y += n1[a] - '0';
		if (b >= 0)
			y += n2[b] - '0';
		if (a < 0 && b < 0 && y == 0)
		{
			break;
		}
		x = y / 10;
		r[c] = y % 10 + '0';
	}
	r[c] = '\0';
	if (a >= 0 || b >= 0 || x)
		return (0);
	for (c -= 1, d = 0; d < c; c--, d++)
	{
		x = r[c];
		r[c] = r[d];
		r[d] = x;
	}

	return (r);
}
