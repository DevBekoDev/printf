#include "main.h"

/**
 * write_char - a functin that prints a string
 * @c: a char
 * @buffer: a Buffer array
 * @flags: it Calculates active flags of the function
 * @width: finds width of the func
 * @precision: finds precision specifier of the func
 * @size: finds size specifier of the func
 * Return: num of chars will be printed in the func
*/

int write_char(char c, char buffer[],
	int flags, int width, int precision, int size)
{
	int x = 0;
	char p = ' ';

	UNUSED(precision);
	UNUSED(size);

	if (flags & F_ZERO)
		p = '0';

	buffer[x++] = c;
	buffer[x] = '\0';

	if (width > 1)
	{
		buffer[BUFF_SIZE - 1] = '\0';
		for (x = 0; x < width - 1; x++)
			buffer[BUFF_SIZE - x - 2] = p;

		if (flags & F_MINUS)
			return (write(1, &buffer[0], 1) +
					write(1, &buffer[BUFF_SIZE - x - 1], width - 1));
		else
			return (write(1, &buffer[BUFF_SIZE - x - 1], width - 1) +
					write(1, &buffer[0], 1));
	}

	return (write(1, &buffer[0], 1));
}
