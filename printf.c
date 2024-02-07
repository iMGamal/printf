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
	int total = 0;

	va_list ap;

	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			putchar(*format);
			total++;
		}
		else
		{
			switch (format[++total])
			{
				case 'c':
					total += _printf("%c", va_arg(ap, int));
					break;
				case 's':
					total += _printf("%s", va_arg(ap, char *));
					break;
				case '%':
					total +=_printf("%%", va_arg(ap, int));
					break;
				case 'd':
					total +=_printf("%d", va_arg(ap, int));
					break;
				case 'i':
					total +=_printf("%i", va_arg(ap, int));
					break;
				default:
					putchar('%');
					putchar(*format);
					total +=2;
					break;
			}
			format++;
		}
	}
	va_end(ap);
	return (total);
}
