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
			x += _printf(va_arg(ap, char *));
		}
		else if (format == NULL)
		{
			_printf(va_arg(ap, char *));
			write(1, format, 1);
		}
		else
		{
			if (*format == 'c')
			{
				_printf(va_arg(ap, char *));
				write(1, format, 1);
			}
			if (*format == 's')
			{
				_printf(va_arg(ap, char *));
				write(1, format, 1);
			}
			if (*format == 'd')
			{
				_printf(va_arg(ap, char *));
				write(1, format, 1);
			}
			if (*format == 'i')
			{
				_printf(va_arg(ap, char *));
				write(1, format, 1);
			}
			if (*format == '%')
			{
				_printf(va_arg(ap, char *));
				write(1, format, 1);
			}
		}
		format++;
	}
	va_end(ap);
	return (x);
}
