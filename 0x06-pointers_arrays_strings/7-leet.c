#include "main.h"

/**
 * *leet -  function that encodes a string into 1337.
 * @enc: is the the array
 *
 * Return: the value of enc
 */

char *leet(char *enc)
{
	int x = 0, y;
	char s[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (; enc[x] != '\0'; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (s[y] == enc[x])
			{
				enc[x] = s2[y];
			}
		}
	}
	return (enc);
}
