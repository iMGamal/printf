#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - Entry prints name
 * @format: name
 * Return - number of characters
 */
int _printf(const char *format, ...)
{
	va_list jj;

	int num; int x; int y;

	va_start(jj, format);
	num = 0; x = 0; y = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			num += _printf(format++, jj);
		}
		if (*format == 's')
		{
			x += _printf(format++, jj);
		}
		if (*format == 'c')
		{
			y += _printf(format++, jj);
		}
		else
		{
			num += write(1, format, 1);
			format++;
		}
	}
	va_end(jj);
	return (num);

}
