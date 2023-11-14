#include <stdio.h>
#include "main.h"

#ifndef __PRINTF_
#define __PRINTF_

/**
 * _printf - function that produces output according to a format
 * @const - argument input
 * @char * - argument input
 * @format - character string
 * @... - ellipsis for variadic function
 * Return: Always 0 (Success).
 */

#endif

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
