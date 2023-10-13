#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int leap_year;

	leap_year = 0;

	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		leap_year = 1;
	}

	if  (leap_year == 1)
	{
		if (month == 2 && day == 29)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
		else
		{
			day = convert_day(month, day);
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
	}
	else
	{
		day = convert_day(month, day);
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}
