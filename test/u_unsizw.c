#include "main.h"

/**
 * u_unsize - a function that turns a number
 *	to the specified size
 * @num: a number to be turned
 * @size: a number sees the type to be turned
 * Return: value of num that will be turned
*/

long int u_unsize(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
