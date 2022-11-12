#include "main.h"

/**
 * printint - print an integer
 * @n: int to print
 * @args : argument
 * Return: number of printed chars
 */
int printint(va_list arg)
{
	unsigned int num;
	int n = va_arg(arg, int);
	int d, len;
	d = 1;
	len = 0;
	num = n;
	if (n < 0)
	{
		putchar('-');
		len++;
		num = -n;
	}
	while (num / d > 9)
		d *= 10;
	while (d != 0)
	{
		putchar('0' + num / d);
		len++;
		num %= d;
		d /= 10;
	}
	return (len);
}
/**
 * printpercent - print percent
 * @args: argument
 * Return: int
 */
int printpercent(va_list arg)
{
	(void)arg;
	putchar('%');
	return (1);
}
/**
 * funct_string - prints strings
 * @arg: list of arguments the function prints is recieving
 * Return: return the length of the string
 */
int funct_string(va_list arg)
{
	unsigned int i;
	char *str;

	str = va_arg(arg, char *);
	if (str == 0)
		str = "(null)";
	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);
	return (i);
}
/**
 * printcharacter - prints a char
 *@args: argument
 *
 * Return: character
 */
int printcharacter(va_list arg)
{
	putchar(va_arg(arg, int));
	return (1);
}
