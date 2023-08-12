#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, s, t;

	for (f = '0'; f <= '7'; f++)
	{
		for (s = f + 1; s <= '8'; s++)
		{
			for (t = s + 1; t <= '9'; t++)
			{
				putchar(f);
				putchar(s);
				putchar(t);
				if (!(f == '7' && s == '8' && t == '9'))
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
