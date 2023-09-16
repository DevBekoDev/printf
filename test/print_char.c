#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - print a charachter
 * @args: argument provided to the func
 * Return: 1
 */

int print_char(va_list args)
{
	char s;

	s = va_arg(args, int);
	_putchar(s);
	return (1);
}
