#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - Entry point
 * @format - character string
 * Return - _printf
 */
int _printf(const char *format, ...)
{
	va_list mg;

	int total;

	va_start(mg, format);
	total = 0;
	while (*format)
	{
		if (*format == '%')
		{
			write(1, format, 1);
			total++;
		}
		if (*format == 'c')
		{
			char c = va_arg(mg, int);
			write(1, &c, 1);
			total++;
		}
		else if (*format == 's')
		{
			char *string = va_arg(mg, char*);
			write(1, &string, 1);
			total++;
		}
	}
	va_end(mg);
	return (total);
}
