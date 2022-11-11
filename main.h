#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct print
{
	char c;
	int (*f)(va_list args);
} print_t;
int _putchar(char c);
int get_function(const char s, va_list args);

int printstring(va_list args);
int printcharacter(va_list args);
int printint(va_list args);
int printpercent(va_list args);
#endif
