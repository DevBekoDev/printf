#include "main.h"

/**
 * _octal - a function that prints an unsigned number in octal
 * @types: a List of arguments in the func
 * @buffer: a buffer array in the func
 * @flags: it Calculates active flags in the func
 * @width: finds width of the func
 * @precision: finds a precision
 * @size: finds a size
 * Return: a number of charactors that wil be printed
*/

int _octal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{

	int x = BUFF_SIZE - 2;
	unsigned long int un = va_arg(types, unsigned long int);
	unsigned long int un2 = un;

	UNUSED(width);

	un = u_unsize(un, size);

	if (un == 0)
		buffer[x--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (un > 0)
	{
		buffer[x--] = (un % 8) + '0';
		un /= 8;
	}

	if (flags & F_HASH && un2 != 0)
		buffer[x--] = '0';

	x++;

	return (write_unsign(0, x, buffer, flags, width, precision, size));
}
