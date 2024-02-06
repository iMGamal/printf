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
		if (*format == '%')
		{
			x += _printf(format++, ap);
		}
		else
		{
			x += write(1, format, 1);
			format++;
		}
	}
	while (*format == '\0')
	{
		if (*format == 'c')
		{
			x += _printf(va_arg(ap, char *));
		}
		else if (*format == 's')
		{
			x += _printf(va_arg(ap, char *));
		}
		else if (*format == 'd')
		{
			x += _printf(va_arg(ap, char *));
		}
		else if (*format == 'i')
		{
			x += _printf(va_arg(ap, char *));
		}
		else
		{
			write(1, format, 1);
		}
	format++;
	}
	va_end(ap);
	return (x);
}
