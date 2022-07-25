#include <string.h>
#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: pointer to the string s to be searched
 * @needle: pointer to the character being searched for
 *
 * Return: pointer to the first position of the c.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
