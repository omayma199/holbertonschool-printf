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
/**
* printstring - prints a string
* @args: argument
* Return : length
*/
int printstring(va_list args)
{
	int length = 0;
	va_list arg;
	*str = va_arg(args, char *)


	if (str == NULL)
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');

	else
		{
			while (str[length] != '\0')
			{
				_putchar[str[length]);
					length++;
			}
		}
	return (1);
}
/**
* printcharacter - prints a char
*@args: argument
*
* Return: int
*/
int printcharacter(va_list args)
{
	va_list args;

	_putchar(va_arg(args, int));
	return (1);
}
