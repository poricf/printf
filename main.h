#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_num(va_list n);
int print_string(va_list s);
int strlenn(const char *s);
int _strcmp( const char *s, const char* t);
int print_char(va_list l);

/**
 * struct types - specifier structure for printf
 * @p: pointer to characteres specifiers
 * @func : function pointer to print fucntions
 */

typedef struct types
{
	char p;
	int (*func)(va_list);
} myprintf;

#endif /* MAIN_H */
