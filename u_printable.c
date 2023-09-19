#include "main.h"

/**
 * u_printable - a function that see if a char is printable
 * @c: Charactor
 * Return: 1 if the char is printable, 0 otherwise
 */

int u_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
