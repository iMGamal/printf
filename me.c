#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - a function that produces formatted output.
 * @const - data input
 * @char * - data input
 * @format - a character string.
 * Return : the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0;

	va_list ap;
	va_start(ap, format);
	if (format == 0)
	{
		printf("Character:[%c]\n", i);
		return (0);
	}
	else if (format != 0)
	{
		printf("String:[%s]\n", format);
		return (0);
	}
	return (0);
}
