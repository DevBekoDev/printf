include "main.h"

/**
 * x_hexa_code - a function that turns ascci codes
 *	in hexadecimal code to buffer
 * @buffer: Array of charactars
 * @i: an Index
 * @ascii_code: ASSCI code that will be turned
 * Return: Always 3
 */

int x_hexa_code(char ascii_code, char buffer[], int i)
{
	char ch[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = ch[ascii_code / 16];
	buffer[i] = ch[ascii_code % 16];

	return (3);
}
