#include "main.h"
/**
 * *_strcat - A function that concatenates two strings.
 * @dest:recipient string
 * @src: source string to be appended
 * Return: two concat strings.
 */

char *_strcat(char *dest, char *src)
{
	int x = -1, y;

	for (y = 0; dest[y] != '\0'; y++)
		;
	do {
		x++;
		dest[y] = src[x];
		y++;
	} while (src[x] != '\0');

	return (dest);
}
