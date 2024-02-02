#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - Entry prints name
 * @format: name
 * Return - int
 */
int _printf(const char *format, ...)
{
	va_list jj;

	int num;

	va_start(jj, format);
	num = 0;
	while (format[num] != '\0')
	{
		if (*format == '%')
		{
			num += _printf(format++, jj);
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
