#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * printint - print an integer
 * @n: int to print
 * @args : argument 
 * Return: number of printed chars
 */
int printint(va_list args)
{
	int count = 0, n, mod = 1;
	unsigned int x;
	n = va_arg(args, int);
	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -x;
		++count;
	}
	while (x / mod > 9)
	{
		mod = mod * 10;
	}
	while (mod > 9)
	{
		_putchar(x / mod + '0');
		x = (x % mod);
		++count;
	}
	return (count);
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
