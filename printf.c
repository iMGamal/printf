#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - Entry point
 * @format - character string
 * Return - numbers of characters printed
 */
int _printf(const char *format, ...)
{
	va_list jj;

	int num;

	va_start(jj, format);
	num = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			num += _printf(format++, jj);
		}
	}
	while (*format == '\0')
	{
		if (*format == 'c')
		{
			num += _printf(format++, jj);
		}
		else
		{
			write(1, format, 1);
		}
	}
	va_end(jj);
	return (num);
}
