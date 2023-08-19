#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - prints length of characters
 *
 * @format: format of characters
 * Return: length of characters
 */

int _printf(const char *format, ...)
{
	int i;
	va_list arr;

	va_start(arr, format);
	for (i = 0; va_arg(arr, int) != '\0'; i++)
	{
		i++;
	}

	va_end(arr);
	return (i);
}
