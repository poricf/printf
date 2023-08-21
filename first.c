#include "main.h"

/**
 * _printf - prints out the parameters given to it
 *
 * @format: format of character given to it
 * Return: number of elements given to it
 */


int _printf(const char *format, ...)
{
	va_list arr;
	int i = 0, count = 0;

	if (!format)
		return (-1);
	va_start(arr, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i++;
			}
			else if (cmp_func(format[i + 1]) != NULL)
			{
				count += (cmp_func(format[i + 1]))(arr);
				i++;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(arr);
	return (count);
}
