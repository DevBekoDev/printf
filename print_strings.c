#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print a string
 * @args: arguments provided to the function
 * Return: the number of charachters printed
 */

int print_strings(va_list args)
{
	int i, len;
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(nil)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
	return (len);
}
