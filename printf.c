#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - Entry point
 * @format - argument passed to function
 * Return - _printf
 */
int _printf(const char *format, ...)
{
	va_list mg;

	int total;

	va_start(mg, format);
	total = 0;
	while(*format != '\0')
	{
		if (*format == '%')
		{
			total += _printf(format++, mg);
		}
		else
		{
			total += write(1, format, 1);
			format++;
		}
	}
	va_end(mg);
	return (total);
}
