#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct format - hadnle the format of the input
 * @flag: decides the right conversion specifiers
 * @f: the function to use
 */
typedef struct format
{
	char *flag;
	int (*f)();
} func_match;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int print_strings(va_list args);
int print_char(va_list args);
int print_p_sign(void);
int print_int(va_list args);
int print_dec(va_list args);
int _flag(const char *format, int *i);
int _precision(const char *format, int *i, va_list list);
int _size(const char *format, int *i);
int _width(const char *format, int *i, va_list list);
int print(const char *fmt, int *ind, va_list list, char buffer[],
int flags, int width, int precision, int size);
int _binary(va_list types, char buffer[],
int flags, int width, int precision, int size);
int _non_printable(va_list types, char buffer[],
int flags, int width, int precision, int size);
int _pointer(va_list types, char buffer[],
int flags, int width, int precision, int size);
int _reverse(va_list types, char buffer[],
int flags, int width, int precision, int size);
int _string(va_list types, char buffer[],
int flags, int width, int precision, int size);
int _rot13string(va_list types, char buffer[],
int flags, int width, int precision, int size);
int _unsigned(va_list types, char buffer[],
int flags, int width, int precision, int size);
int _hexadecimal(va_list types, char buffer[],
int flags, int width, int precision, int size);
int _octal(va_list types, char buffer[],
int flags, int width, int precision, int size);
int _hexa_upper(va_list types, char buffer[],
int flags, int width, int precision, int size);
int _hexa(va_list types, char map_to[], char buffer[],
int flags, char flag_ch, int width, int precision, int size);
int u_digit(char c);
int u_printable(char c);
long int u_unsize(unsigned long int num, int size);
int write_char(char c, char buffer[],
int flags, int width, int precision, int size);
int x_hexa_code(char ascii_code, char buffer[], int i);
long int k_numsize(long int num, int size);

/*int print_unknown(void);*/

#endif
