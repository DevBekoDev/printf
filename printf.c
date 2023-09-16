#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: list of types of arguments passed to the function
 * Return: 0 Always in success
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				{
					int x = va_arg(args, int);
					printf("%c", x);
					break;
				}
				case 's':
				{
					char *x = va_arg(args, char*);
					printf("%s", x);
					break;
				}
				case '%':
				{
					_putchar('%');
					break;
				}
				default:
				{
					_putchar(format[i]);
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	_putchar('\n');
	return (i);
}
