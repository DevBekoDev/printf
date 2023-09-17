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
	int (*f)(va_list);
} func_match;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int print_strings(va_list args);
int print_char(va_list args);
int print_p_sign(void);
/*int print_unknown(void);*/
#endif
