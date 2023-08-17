/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
 * poisitive_or_negative - Charck if number is positive or negative
 *
 * Return: Always no return type
 */
void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
