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
	va_list mgamal;

	int total;

	va_start(mgamal, format);
	while(*format != '\0')
	{
		if (*format == '%')
		{
			total += va_arg(mgamal, int);
			format++;
		}
		if (*format == 's')
		{
			total += va_arg(mgamal, int);
			format++;
		}
	}
	while(*format == '\0')
	{
		if (*format == 'c')
		{
			total += va_arg(mgamal, int);
			format++;
		}
	}
	while(*format != 0)
	{
		if (*format == 'c')
		{
			total += va_arg(mgamal, int);
			format++;
		}
	}
	va_end(mgamal);
	return (total);
}
