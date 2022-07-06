#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: on success 0
 */

int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num3 = '0'; num3 <= '9';
			num3++) /*hundredth place*/
	{
		for (num2 = (num3 + 1); num2 <= '9'; num2++) /*tenths=100s+1*/
		{
			for (num1 = (num2 + 1); num1 <= '9'; num1++) /*unit*/
			{
				putchar(num3);
				putchar(num2);
				putchar(num1);
				if (num3 != '7' num || num2 != '8' || num1 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
