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
	int i = 0, n = 0;
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		i++;
	}
	while (format && format[n])
	{
		switch (format[n])
		{
			case 'c':
				_putchar(va_arg(args, unsigned char*));
				break;
			case 's':
				_putchar(va_arg(args, char*));
				break;
			case '%':
				_putchar('%');
				break;
		}
		n++;
	}
	va_end(args);
	_putchar('\n');
}
