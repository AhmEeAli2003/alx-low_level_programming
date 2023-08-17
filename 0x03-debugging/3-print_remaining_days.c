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
int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

if (isLeapYear)
{
if (month > 2 || (month == 2 && day == 29))
{
printf("Day of the year: %d\n", day + 1);
printf("Remaining days: %d\n", 366 - day - 1);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
