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

*All function prototypes used to compile _printf() are included in the header file main.h*

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

### Function description
---

int_printf(const char*format, ..)

*this function produces output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument of stdarg(3)) are converted for output.*

*The format string is composed of zero or more directives:*

	1.Ordinary characters that are copied unchanged to the output stream. (except %)
	2.Conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification starts with the character %, ends with a conversion specifier ( which is a letter).

*The conversion specifier:*

*The conversion specifier is a letter that specifies the type of conversion to be applied. Our program includes the following conversion specifiers:*

	d: decimal number to be provided for printing.

	i: integer to be provided for printing

	c: character to be provided for printing

	s: ...The const char * argument is expected to be a pointer to an array of character type (pointer to a string).

	%: A per cent sign '%' is written. No argument is converted.

*Return value:*

*Upon success, _printfs return the number of characters printed (excluding the null byte used to end output to strings) A negative 1 is returned if an output error is encountered.*

---
int get_function(const char s, va_list args)

*this function called by _printf() and checks for valid conversion specifier when it finds '%' character. the get_function is function will check for the right conversion specifier. upon valid specifier, it returns the corresponding function.*

---
int printcharacter(va_list arg)

*this function gets a variadic argument, traverse the string, and prints a character at a time.*

---
int printpercent(va_list arg)

*this function prints a percent '%'.*

---

### Examples

|	Function			|	Output		|
|-------------------------------------- |----------------------	|
|_printf("Negative:[%d]\n", -762534);	|Negative:[-762534]	|
| _printf("Character:[%c]\n", 'H');     |Character:[H]			|

### Author

**Snoussi Salma**
*Holberton School, cohort 19*

**Mizouni Oumaima**
*Holberton School, cohort 19*
