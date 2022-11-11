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
	int v;
	unsigned int i = 0, valeurT;
	unsigned count = 1;

	v = va_arg(args, int);

	if (v < 0)
	{
		i = i + _putchar('_');
		valeurT = v * -1;
	}
	else
		valeurT = v;

	while (valeurT > 9)
	{
		valeurT = valeurT / 10;
		count = count * 10;
	}
	while (count >= 1)
	{
		i = i + _putchar(((valeurT / count) % 10) + '0');
		count = count / 10;
	}
	return (i);
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
