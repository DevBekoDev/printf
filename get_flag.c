#include "main.h"

/**

 * get_flag - Calculates active flags

 * @format: Formatted string in which to print the arguments

 * @i: take a parameter.

 * Return: Flags:

 */

int get_flag(const char *format, int *i)

{

/* - + 0 # ' ' */

/* 1 2 4 8  16 */

int j, curr_i;

int flag = 0;

const char FLAG_CH[] = {'-', '+', '0', '#', ' ', '\0'};

const int FLAG_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)

{

for (j = 0; FLAG_CH[j] != '\0'; j++)

if (format[curr_i] == FLAGS_CH[j])

{

flag |= FLAG_ARR[j];

break;

}

if (FLAG_CH[j] == 0)

break;

}

*i = curr_i - 1;

return (flag);

}
