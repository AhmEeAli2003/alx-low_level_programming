#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, s;

	for (f = '0'; f <= '8'; f++)
	{
		for (s = f + 1; s <= '9'; s++)
		{
			putchar(f);
			putchar(s);
			if (!(f == '8' && s == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
