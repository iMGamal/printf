#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - a function that produces output according to a format.
 *
 * @const - argument input
 * @char * - argument input
 * @format - a pointer.
 * @... - ellipsis for variadic function
 * Return: Always 0 (Success).
 */

int _printf(const char *format, ...)
{
	int i;
	va_list percent;

	i = 0;

	if (*format == 0)
	{
		printf("format for me is %c\n", i);
		return (0);
	}
	else if (*format > 0)
	{
		printf("string is a loose %s\n", format);
		return (0);
	}
	va_start(percent, *format);
	{
		printf("for us it is relative %s\n", percent);
		return (0);
	}
		return (0);
}
