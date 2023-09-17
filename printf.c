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
	func_match m[] = {
		{"%s", print_strings}, {"%c", print_char},
		{"%%", print_p_sign}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		_printf("Error");
		exit(99);
	}

	while (format[i] != '\0')
	{
		j = 0;
		while (j <= 2)
		{
			if (m[j].flag[0] == format[i] && m[j].flag[1] == format[i + 1])
			{
				len += m[j].f(args);
				i += 2;
				break;
			}
			j++;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
