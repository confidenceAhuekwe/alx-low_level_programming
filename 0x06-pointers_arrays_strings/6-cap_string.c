#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 *
 * @s: is the array
 * Return: Always s.
 */

char *cap_string(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[0] <= 122 && s[0] >= 97)
		{
			s[0] = s[0] - 32;
		}
		if (s[c] == 32 || s[c] == 46 || s[c] == '\t' ||
				s[c] == '\n' || s[c] == 44 || s[c] == 59 ||
				s[c] == '!' || s[c] == '?' || s[c] == '(' ||
				s[c] == ')' || s[c] == '{' || s[c] == '}')
		{
			if (s[c + 1] <= 122 && s[c + 1] >= 97)
			{
				s[c + 1] = s[c + 1] - 32;
			}
		}
		c++;
	}
	return (s);
}
