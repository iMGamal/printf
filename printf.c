#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * _printf - Entry point
 * Description - function that produces output according to a format
 * @format: character string
 * Return - total
 */
int _printf(const char *format, ...)
{
	int total = 0;

	va_list ap;

	va_start(ap, format);
	if (format == NULL)
	{
		format++;
	}
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			total++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				write(1, format, 1);
				total++;
			}
			if (*format == 'c')
			{
				char c = va_arg(ap, int);

				write(1, &c, 1);
				total++;
			}
			if (*format == 's')
			{
				char *string = va_arg(ap, char *);
				int string_length = 0;
				
				while (string[string_length] != '\0')
				{
					string_length++;
				}
				write(1, string, string_length);
				total += string_length;
			}
			if (*format == 'd')
			{
				int d = va_arg(ap, int);

				write(1, &d, 1);
				total++;
			}
			if (*format == 'i')
			{
				int i = va_arg(ap, int);
				
				write(1, &i, 1);
				total++;
			}
		}
		format++;
	}
	va_end(ap);
	return (total);
}
