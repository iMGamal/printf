#include <stdio.h>
#include "main.h"

/**
 * _printf - variadic function for printing
 * @const - argument input
 * @char * - argument input
 * @format - string to be printed
 * @... - ellipsis for variadic function
 * Return: Always 0 (Success).
 */
int _printf(const char *format, ...)
{
	int i;

	i = 0;

	if (*format == '\0')
	{
		printf("decision is %s\n", format);
		return (0);
	}
	else
	{
		printf("format for me is %c\n", i);
		return (0);
	}
		return (0);
}
