#include "main.h"
#include <stdarg.h>
/**
 * get_function - select function for conversion char
 * @s: char to check
 * Return: pointer to function
 */
int get_function(const char s, va_list args)
{
	int i;
	int j = 0;

	print_t print[] = {
		{"c", printcharacter},
		{"s", printstring},
		{"d", printint},
		{"i", printint},
		{"%", printpercent},
	};

	for (i = 0; print[i].c; i++)
	{
		if (print[i].c == s)
		{
			j = j + print[i].f(args);
			return (j);
		}

        }
	return (0);
}
