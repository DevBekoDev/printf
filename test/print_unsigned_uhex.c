#include "main.h"

/**
 * _hexa_upper - a function that Prints an unsigned number
 *	in upper hexa notation
 * @types: a List of arguments in the function
 * @buffer: a buffer array in the fuction
 * @flags: it Calculates active flags of the function
 * @width: finds width of the function
 * @precision: gets a Precision
 * @size: get a Size in the func
 * Return: a number of chars that will be printed
*/

int _hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (_hexa(types, "0123456789ABCDEF", buffer, flags,
'X', width, precision, size));
}
