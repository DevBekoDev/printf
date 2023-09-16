#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
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
/*int print_unknown(void);*/
#endif
