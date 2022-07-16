#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: a pointer given by main
 *
 * Description: change all alpha characters by rot13 rules
 * Return:the s pointer
 */

char *rot13(char *s)
{
	int i = 0;
	int j;
	int start[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
		'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int stop[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	while (s[i] != 0)
	{
		for (j = 0; j < 52; j++)
		{
			if s([i] == start[j])
			{
				s[i] = stop[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
