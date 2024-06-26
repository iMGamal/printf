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
	if (format == NULL)
	{
		return (-1);
	}
	else
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
				if (*p == '\0')
				{
					return (-1);
				}
				switch (*p)
				{
					case 'c': {
							int c;						c = va_arg(args, int);
							putchar(c);
							x++;
							break;
						  }
					case 's': {
							  char *s;
							  s = va_arg(args, char *);
							  if (s == NULL)
							  {
								  s = "(null)";
							  }
							  while (*s)
							  {
								  putchar(*s++);
								  x++;
							  }
							  break;
					}
					case '%': {
							  putchar('%');
							  x++;
							  break;
					}
case 'd':
case 'i':
						  {
							  int n, i;
							  char range[50];
							  n = va_arg(args, int);
							  i = 0;
							  if (n == 0)
							  {
								  range[i++] = '0';
							  }
							  else
							  {
								  if (n < 0)
								  {
								  	putchar('-');
									x++;
								  	n = -n;
								  }
								  while (n > 0)
								  {
									  range[i++] = (n % 10) + '0';
									  n /= 10;
								  }
								  for(int j = i - 1; j >= 0; j--)
								  {
									  putchar(range[j]);
									  x++;
								  }
							  }
							  break;
						  }
				default: {
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
}
