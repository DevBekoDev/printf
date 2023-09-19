#include "main.h"

/**
 * _hexadecimal - a function that prints an unsigned number
 *	in hexadecimal notation
 * @types: a list of arguments in the function
 * @buffer: a buffer array in the func
 * @flags: it Calculates active flags in the func
 * @width: finds width of the function
 * @precision: gets precision of the function
 * @size: gets a size of the function
 * Return: a number of chars that will be printed
*/

int _hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (_hexa(types, "0123456789abcdef", buffer,flags, 'x', width, precision, size));
}
