#include "3-calc.h"

/**
 * op_add - function to add
 * @a: first integer
 * @b: second int
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract
 * @a: first integer
 * @b: second integer
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies teo variables
 * @a: first variable of type integer
 * @b: second variable of type integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integer variables
 * @a: first integer variable
 * @b: second integer variable
 *
 * Return: return the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder of the division of two integers
 * @a: first integer variable
 * @b: second integer variable
 *
 * Return: the remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
