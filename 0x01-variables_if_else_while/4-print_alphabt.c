#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
			putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
