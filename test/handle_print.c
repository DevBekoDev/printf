#include "main.h"

/**
 * print - a function that prints an argument
 *	based on its type
 * @fmt: a Formatted string
 * @list: a List of arguments that will be printed.
 * @ind: integer
 * @buffer: Buffer array
 * @flags: it Calculates active flags of the function
 * @width: finds width.
 * @precision: gets Precision
 * @size: gets Siz
 * Return: 1 or 2;
*/

int print(const char *fmt, int *ind, va_list list, char buffer[],
int flags, int width, int precision, int size)
{
int x, unknownL = 0, printedC = -1;
	fmt_t fmt_types[] = {
	{'c', _char}, {'s', _string}, {'%', _percent},
	{'i', _int}, {'d', _int}, {'b', _binary},
	{'u', _unsigned}, {'o', _octal}, {'x', _hexadecimal},
	{'X', _hexa_upper}, {'p', _pointer}, {'S', _non_printable},
	{'r', _reverse}, {'R', _rot13string}, {'\0', NULL}
};
for (x = 0; fmt_types[x].fmt != '\0'; x++)
if (fmt[*ind] == fmt_types[x].fmt)
return (fmt_types[x].fn(list, buffer, flags, width, precision, size));

if (fmt_types[x].fmt == '\0')
{
if (fmt[*ind] == '\0')
return (-1);
unknownL += write(1, "%%", 1);
if (fmt[*ind - 1] == ' ')
unknownL += write(1, " ", 1);
else if (width)
{
--(*ind);
while (fmt[*ind] != ' ' && fmt[*ind] != '%')
--(*ind);
if (fmt[*ind] == ' ')
--(*ind);
return (1);
}
	unknownL += write(1, &fmt[*ind], 1);
return (unknownL);
}
	return (printedC);
}
