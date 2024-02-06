#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * _printf - Entry point
 * Description - function that produces output according to a format
 * @format: character string
 * Return - returns number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;

	int x;

	va_start(ap, format);
	x = 0;
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			x++;
		}
		else if (format == NULL)
		{
			return (0);
		}
		else
		{
			if (*format == 'c')
			{
				x += _printf(format++, ap);
			}
			if (*format == 's')
			{
				write(1, format, 1);
				x++;
			}
			if (*format == 'd')
			{
				write(1, format, 1);
				x++;
			}
			if (*format == 'i')
			{
				write(1, format, 1);
				x++;
			}
			if (*format == '%')
			{
				write(1, format, 1);
				x++;
			}
		}
		format++;
	}
	va_end(ap);
	return (x);
}
