#include "main.h"

/**
 * _rot13string - a funcyion that Print a string in rote 13
 * @types: a List of arguments of the func
 * @buffer: Buffer array for the function
 * @flags: it Calculates active flags of the function
 * @width: width of the func
 * @precision: finds Precision specification of the func
 * @size: finds Size specifier of the func
 * Return: Numbers of chars that printed in the func
*/

int _rot13string(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char c;
	char *st;
	unsigned int i, j;
	int counter = 0;
	char ch1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	st = va_arg(types, char *);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	if (st == NULL)
	st = "(AHYY)";
	for (i = 0; st[i]; i++)
	{
		for (j = 0; ch1[j]; j++)
		{
			if (ch1[j] == st[i])
		{
			c = ch2[j];
			write(1, &c, 1);
			counter++;
			break;
			}
		}
		if (!ch1[j])
		{
			c = st[i];
			write(1, &c, 1);
			counter++;
		}
	}
	return (counter);
}
