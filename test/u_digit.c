#include "main.h"

/**
 * u_digit - ia function that Verifies if a char is a digit or not
 * @c: a Char
 * Return: 1 if c is a digit, 0 if it is not a digit
*/

int u_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
