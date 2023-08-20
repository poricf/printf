#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

void print_string(char *s);

/**
 * _printf - prints out the parameters given to it
 *
 * @format: format of character given to it
 * Return: number of elements given to it
 */

int _printf(const char *format, ...)
{
	va_list arr;
       	unsigned int i = 0, count = 0;
	char *s, a;
        
        if (!format)
		return(-1);

	va_start(arr, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			count++;
			if (format[i] == '%' && format[i + 1] == '%')
			{
				count--;
				_putchar('%');
			}
			else if (format[i] == '%' && format[i + 1] != '%' && format[i - 1] != '%')
			{
				count--;
				i++;
				switch (format[i])
				{
					case 'c':
						a = va_arg(arr, int);
						_putchar(a);
						break;
					case 's':
						s = va_arg(arr, char *);
						print_string(s);
						break;
					case 'd':
						print_num(va_arg(arr, int));
						break;
					case 'i':
						print_num(va_arg(arr, int));
						break;
					default:
						_putchar(format[i]);
						i++;
						continue;
				}
			}
			else if (format[i] != '%')
				_putchar(format[i]);
			i++;
		}
	}
	va_end(arr);
	return (count);
}

