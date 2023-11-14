#include <stdio.h>
#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 *
 * @const - argument input
 * @char * - argument input
 * @format - a pointer.
 * @... - ellipsis for variadic function
 * Return: Always 0 (Success).
 */

int _printf(const char *format, ...)
{
	int i;
	int percent;

	i = 0;
	percent = 25;

	if (*format == 0)
	{
		printf("format for me is %c\n", i);
		return (0);
	}
	else if (*format > 0)
	{
		printf("decision for me is %s\n", format);
		return (0);
	}
	else
	{
		printf("% is the goal\n", percent);
		return (0);
	}
		return (0);
}
