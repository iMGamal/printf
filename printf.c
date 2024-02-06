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
int percent_c(int c)
{
	return (write(1, &c, 1));
}
int percent_s(char *string)
{
	return (write(1, string, 1));
}
int percent_d(int y)
{
	return (write(1, &y, 1));
}
int percent_i(int z)
{
	return (write(1, &z, 1));
}

int specifier(char percent, va_list ap)
{
	int x = 0;

	if (percent == 'c')
	{
		x += percent_c(va_arg(ap, int));
	}
	else if (percent == 's')
	{
		x += percent_s(va_arg(ap, char *));
	}
	else if (percent == 'd')
	{
		x += percent_d(va_arg(ap, int));
	}
	else if (percent == 'i')
	{
		x += percent_i(va_arg(ap, int));
	}
	return (x);
}

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
	va_end(ap);
	return (x);
}
