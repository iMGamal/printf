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
	while (*format != '\0')
	{
		if (*format == '%')
		{
			x += _printf(ap, format++);
		}
		else
		{
			x += write(1, format, 1);
		}
		format++;
	}
	va_end(ap);
	return (x);
}
