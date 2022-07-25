#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @s: pointer to the string s to be searched
 * @c: character to be found
 *
 * Return: pointer to the first occurence of the character c
 *
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
