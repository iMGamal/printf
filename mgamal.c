#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Entry point
 * @format - argument passed to function
 * Return - 0
 */
int _printf(const char *format, ...)
{
	va_list ap;

	int c = 0; int s = 0;

	va_start(ap, format);
	if (*format == c)
	{
		printf("%c\n", va_arg(ap, int));
	}
	if (*format == s)
	{
		printf("%d\n", va_arg(ap, int));
	}
	return (0);
}
