#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if a character is uppercase
 * @c: variable whose character is to be checked
 *
 * created by: Confidence Ahuekwe
 * cc: 8th July, 2022
 *
 * Return: On uppercase 1, Otherwise 0
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
