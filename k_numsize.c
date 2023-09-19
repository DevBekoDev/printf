#include "main.h"

/**
 * k_numsize - a function that turns a number
 *	to the specified size
 * @num: a number that will be casted.
 * @size: a number that is indicating the type
 * Return: turned number
*/

long int k_numsize(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}
