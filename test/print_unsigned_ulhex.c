#include "main.h"

/**
 * unsigned_hexa - a function that Prints a hexadecimal number
 * in lowercase or uppercase
 * @types: a list of arguments of the func
 * @map_to: An array of values
 * @buffer: a Buffer array
 * @flags: it Calculates active flags of the func
 * @flag_ch: ch Calculates active flags of  the func
 * @width: finds width
 * @precision: gets a Precision
 * @size: gets a Size
 * Return: a number of chars that will be printed
*/

int unsigned_hexa(va_list types, char map_to[], char buffer[],
	int flags, char flag_ch, int width, int precision, int size)
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
		buffer[x--] = map_to[un % 16];
		un /= 16;
	}

	if (flags & F_HASH && un2 != 0)
	{
	buffer[x--] = flag_ch;
	buffer[x--] = '0';
	}

	x++;

	return (write_unsign(0, x, buffer, flags, width, precision, size));
}
