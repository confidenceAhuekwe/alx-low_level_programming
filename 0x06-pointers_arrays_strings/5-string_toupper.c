#include "main.h"

/**
 * *string_toupper -  function that changes all lowercase letters of a
 * string to uppercase.
 * @s: is the array
 *
 * Return: s.
 */

char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if ((s[a] >= 97) && (s[a] <= 122))
		{
			s[a] = s[a] - 32;
		}
		x++;
	}
	return (s);
}
