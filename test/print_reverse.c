#include "main.h"

/**
 * _reverse - a function that Prints reverse strings
 * @types: a List of arguments of the function
 * @buffer: a Buffer array
 * @flags: it Calculates active flags of the func
 * @width: width of the func
 * @precision: finds Precision specification of the func
 * @size: finds Size specifier of the function
 * Return: a Numbers of chars that printed in the fun
*/

int _reverse(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char *st;
	int x, counter = 0;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(size);

	st = va_arg(types, char *);

	if (st == NULL)
	{
		UNUSED(precision);

		st = ")Null(";
	}
	for (x = 0; st[x]; x++)
		;

	for (x = x - 1; x >= 0; x--)
	{
		char y = st[x];

		write(1, &y, 1);
		counter++;
	}
	return (counter);
}
