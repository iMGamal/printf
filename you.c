#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - formatted printing
 * @const: data input
 * @char *: data input
 * @format: character string
 * Return: number of characters printed 
 */
int _printf(const char *format, ...)
{
	int sum = 0;

	int n = -1;

	va_list ap;

	va_start(ap, format);
	if (format != 0)
	{
		printf("Negative %d\n", n);
		return (0);
	}
	else if (format == 0)
	{
		printf("Legnth %i\n", sum);
		return (0);
	}
	return (sum);
}
