# Who knew printf() could be implemented?

*this repository contains C program for _printf() function written as part of the lowel-level programming and Algorithm project at **Holberton** **School**. the program is the implementation of C language function printf() which prints the formatted output.*

## Project overview
---
### Compilation:

*All files will be compiled with gcc 4.8.4 using the flags: -Wall-Werror-Wextra-pedantic*
>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

### Betty coding style:
*All files are written in C and follows the Betty coding style for Holberton School.For more detail, check this page:

[Betty style documentation](http://www.bettystyledocumentation.com)

### Authorized function and macros

	* write (man 2 write)
	* malloc(man 3 malloc)
	* free(man 3 free)
	* va_start (man 3 va_start)
	* va_end (man 3 va_end)
	* va_copy (man 3 va_copy)
	* va_arg (man 3 va_arg)
	* putchar(char c)

### Function prototype
---

*All function prototypes used to compile _printf() are included in the header file main.h

	* int get_function(const char s, va_list args)
	* int _printf(const char *format, ...)
	* int printint(va_list arg)
	* int printpercent(va_list arg)
	* int printstring(va_list arg)
	* int printcharacter(va_list arg)

### File description
---
	* _printf.c: -contains the function _printf()
	* man_3_printf: -manual page for _printf() function.
	* getfunction.c: -contains the function printstring, printcharacter,printpercent and printint.
	* main.h: -contains all headers, prototype and structure declaration

###Function description
---
int_printf(const char*format, ..)

*this function produces output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument of stdarg(3)) are converted for output.

