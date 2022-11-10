#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * printint - print an integer
 * @n: int to print
 * Return: number of printed chars
 */

int printint(int n)
{
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		++i;
	}
	if (n <= 9)
	{
		_putchar(n + '0');
		return (1);
	}
	if (n > 9)
	{
		count = printint(n / 10) + 1;
		_putchar(n % 10 + '0');
		return (count);
	}
	return (0);
}	
/**
 * printpercent - print percent
 * @args: argument
 * Return: int
 */
int printpercent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
