#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: variable to be checked
 *
 * Created by: Confidece Ahuekwe
 * cc: 8th July 2022
 *
 * Return: 1 if it is a digit, Otherwise 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
