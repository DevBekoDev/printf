#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include  <stdarg.h>
/**
 * print_dec - prints decimal numbers
 * @args: arguments provided to get printed
 * Return: number of decimals printed
 */

int print_dec(va_list args)
{
		int _dec = va_arg(args, int);
		int num, last_num, digit, exp, i;

		i = 1;
		last_num = _dec % 10; /* get th last digit */
		exp = 1;
		_dec = _dec / 10; /* remove thw last digit */
		num = _dec;

		if (last_num < 0)
		{
				_putchar('-');
				num = -num;
				_dec = -_dec;
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

				num = _dec;
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
