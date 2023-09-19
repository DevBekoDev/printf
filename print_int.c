#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include  <stdarg.h>
/**
 * print_int - prints integers
 * @args: arguments provided to get printed
 * Return: number of integers printed
 */

int print_int(va_list args)
{
	int _int = va_arg(args, int);
	int num, last_num, digit, exp, i;

	i = 1;
	last_num = _int % 10; /* get th last digit */
	exp = 1;
	_int = _int / 10; /* remove thw last digit */
	num = _int;

	if (last_num < 0)
	{
		_putchar('-');
		num = -num;
		_int = -_int;
		last_num = -last_num;
		i++; /* count the characters printed */
	}
	
	if (num > 0)
	{
		while (num / 10 != 0) /* check more digits to process */
		{
			exp *= 10;
			num /= 10;
		}

		num = _int;
		while (exp > 0)
		{
			digit = num / exp; /* get the leftmost digit of the number */
			_putchar(digit + '0');
			num = num - (digit * exp); /*remove leftmost digit from the remaining of th e number */
			exp = exp / 10;
			i++; /* count the charachters printed */
		}
	}
	_putchar(last_num + '0');

	return (i);
}
