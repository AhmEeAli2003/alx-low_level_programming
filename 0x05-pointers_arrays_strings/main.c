#include <stdio.h>
#include "main.h"
/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
int n = 45, m = 434;

swap_int(&n, &m);
printf("%d\t%d\n", n, m);
return(0);
}
