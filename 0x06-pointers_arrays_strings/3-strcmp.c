#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: parameter 1 of the function
 * @s2: parameter 2 of the function
 * Return: Always 0
 *
 * Created by Confidence Ahuekwe
 * date: 15th July, 2022.
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}
