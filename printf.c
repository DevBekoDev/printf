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
	int i, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		_printf("Error");
		exit(99);
	}

	for (i = 0; format[i] != '0'; i++)
	{
		int found_spec = 0; /*check for the conversion specifier */

		if (format[i] == '%' && format[i + 1] != '\0')
		{
			for (j = 0; j <= 2; j++)
			{
				if (m[j].flag[0] == format[i] && m[j].flag[1] == format[i + 1])
				{
					len += m[j].f(args);
					i++;
					found_spec = 1;
					break;
				}
			}
		}
		if (!found_spec)
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(args);
	return (len);
}
