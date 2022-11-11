#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - function like printf
 * @format: the pointer of char
 * Return: 1
 */
int _printf(const char *format, ...)
{
	int count = 0, fun = 0, i = 0;
	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				fun = get_function(format[i + 1]);
			if (fun == NULL)
			{
				putchar(format[i]);
				count++;
				i++;
			}
			else
			{
				count += fun(args);
				i += 2;
				continue;
			}
		}
		else
		{
			putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
