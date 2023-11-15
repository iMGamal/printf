#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 *_printf - a function that produces output according to a format.
 *@const - data input
 *@char * - data input
 *@format - a character string.
 *Return : the number of characters printed (excluding the null byte used to end output to strings).
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
