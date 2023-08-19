#include "main.h"
#include <stdarg.h>
#include <stdlib.h>


/**
 * _printf - prints out the parameters given to it
 *
 * @format: format of character given to it
 * Return: number of elements given to it
 */

int _printf(const char *format, ...)
{
	va_list arr;
	int i, j, count;
	char *s;
	char a;
	
	count = 0;
	va_start(arr, format);
	if (format != NULL)
	{
		i = 0;
		while (format[i] != '\0')
		{
			count++;
			if (format[i] =='%' && format[i + 1] == '%')
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
						for (j = 0; s[j] != '\0'; j++)
							_putchar(s[j]);
						break;
					case 'd':
						print_num(va_arg(arr, int));
						break;
					default:
						_putchar(format[i]);
						i++;
						continue;
				}
			}
			else
			{
				_putchar(format[i]);
		
			}
			i++;
		}
	}

	va_end(arr);


	return (count);
}
