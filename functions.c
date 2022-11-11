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
	int count = 0;

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
/**
* printstring - prints a string
* @args: argument
* Return : string
*/
int printstring(va_list args)
{
	int i;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
* printcharacter - prints a char
*@args: argument
*
* Return: character
*/
int printcharacter(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
