#include "main.h"

/**
 * print_char - Entry function. for printing characters
 * @arr: variable va_list
 *
 * Return: 1 (nbyte)
 */
int print_char(va_list arr)
{
	_putchar(va_arg(arr, int));
	return (1);

}
