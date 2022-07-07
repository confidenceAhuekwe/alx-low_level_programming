#include <stdio.h>
#include "main.h"
#define leapDaysTot366
#define daysTot365
#define janDaysTot31

/**
 * print_remaining_days - takes a date and prints how many days are left
 * in the year, taking leap years into account.
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * Created by: ALX
 * Modified by: Confidence Ahuekwe
 * Date modified: 6th July, 2022
 *
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((!(year % 100 == 0) || year % 400 == 0)
			&& year % 4 == 0)
	{
		if (month > 2 && day >= 60)
			day++;
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", leapDaysTot - day);
	}
	else
	{
		if (month == 2 && day == 60)
			printf("Invalid date: %02d/%02d/%04d\n",
					month, day - janDaysTot, year);
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", daysTot - day);
		}
	}
}