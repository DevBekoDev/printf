#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_r - prints reversed string
 * @args: aruments provided to the function
 * Return: number of integers
 */

int print_r(va_list args)
{
	char *s = va_arg(args, char*);
	int i;

	for (i = _strlen(s); i >= 0; i--)
	{
		putchar(s[i]);
	}
	return (_strlen(s));
}
