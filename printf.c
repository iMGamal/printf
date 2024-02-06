#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - Entry point
 * Description - function that produces output according to a format
 * @format: character string
 * Return - int
 */
int _printf(const char *format, ...)
{
	va_list ap;

	int x;

	va_start(ap, format);
	x = 0;
	while (*format != '\0')
	{
		if (*format == ' ')
		{
			x += _printf(format++, ap);
		}
		if (*format == '%')
		{
			write(1, format, 1);
			format++;
		}
	}
	va_end(ap);
	return (x);
}
