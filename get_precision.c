#include "main.h"

/**
 * _precision - a function that Calculates the precision
 * @format: Formatted string in which to print
 * @i: a List of arguments that will be printed
 * @list: a list of arguments
 * Return: Precision.
*/

int _precision(const char *format, int *i, va_list list)
{
int x = *i + 1;
int pr = -1;

	if (format[x] != '.')
	{
return (pr);
	}

	x++;

	pr = 0;

for (; format[x] != '\0'; x++)
{
if (u_digit(format[x]))
{
pr *= 10;
pr += format[x] - '0';
}
else if (format[x] == '*')
{
x++;
pr = va_arg(list, int);
break;
}
	else
break;
	}

	*i = x - 1;

	return (pr);
}
