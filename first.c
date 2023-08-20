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
	unsigned int i = 0, count = 0;

	if (!format)
		return (-1);

	va_start(arr, format);
	while (format[i])
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
			else
			{
				char found = 0;
				myprintf printf[] = {
					{'c', print_char},
					{'s', print_string},
					{'d', print_num},
					{'i', print_num},
					{'\0', NULL}
				};

				int k = 0;
				while (printf[k].p != '\0')
				{
					if (printf[k].p == format[i + 1])
					{
						count += (printf[k].func)(arr);
						found = 1;
						break;
					}
					k++;
				}

				if (!found)
				{
					_putchar(format[i]);
					count++;
				}
				i++;
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
