#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format : character string
 * Return : number of characters printed
 */
int _printf(const char *format, ...)
{
	int print = 0;

	va_list ptr;

	va_start(ptr, format);

	if (*format > 0)
	{
		printf("%s",ptr);
	}
	else if (*format == 0)
	{
		printf("%c",print);
	}
	else
	{
		printf("%s",format);
	}
	va_end(ptr);
	return (print);
}
