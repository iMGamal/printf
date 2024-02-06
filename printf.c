#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Entry point
 * Description - function that produces output according to a format
 * @format: character string
 * Return - i
 */
int _printf(const char *format, ...)
{
	va_list ap;

	int i;

	va_start(ap, format);
	i = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			i += _printf(format++);
		}
		else
		{
			i += fwrite(1, format,1);			format++;
		}
	}
	va_end(ap);
	return (i);
}
