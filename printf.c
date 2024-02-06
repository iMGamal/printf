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
		else if (*format == '\0')
		{
			break;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				int count = va_arg(ap, int);
				write(1, &count, 1);
				x++;
			}
			if (*format == 's')
			{
				char *str = va_arg(ap, char *);
				write(1, &str, 1);
				x++;
			}
			if (*format == 'd')
			{
				int sum = va_arg(ap, int);
				write(1, &sum, 1);
				x++;
			}
			if (*format == 'i')
			{
				int total = va_arg(ap, int);
				write(1, &total, 1);
				x++;
			}
			if (*format == '%')
			{
				write(1, format, 1);
				x++;
			}
		}
	}
	va_end(ap);
	return (x);
}
