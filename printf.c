#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - Entry point
 * @format - argument passed to function
 * Return - 0
 */
int _printf(const char *format, ...)
{
	va_list mgamal;

	int total;

	va_start(mgamal, format);
	total = 0;
	while(*format != '\0')
	{
		if (*format == '%')
		{
			total += va_arg(mgamal, int);
			format++;
		}
		else
		{
			total += write(1, format, 1);
		}
	}
	return (total);
}
