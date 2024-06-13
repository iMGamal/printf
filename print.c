#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Function that produces output according to a format
 * @format: Character string
 * Return: Number of characters printed except for null bytes
 */
int _printf(const char *format, ...)
{
	const char *p;

	va_list args;

	int x;

	x = 0;
	va_start(args, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			switch (*p)
			{
				case 'c':
					{
						int c;
						c = va_arg(args, int);
						putchar(c);
						x++;
						break;
					}
				case 's':
					{
						char *s;
						s = va_arg(args, char *);
						if (s)
						{
							while (*s)
							{
								putchar(*s++);
								x++;
							}
							break;
						}
					}
				case '%':
					{
						putchar('%');
						x++;
						break;
					}
				default:
					{
						putchar('%');
						putchar(*p);
						x += 2;
						break;
					}
			}
		}
		else
		{
			putchar(*p);
			x++;
		}
	}
	va_end(args);
	return (x);
}
