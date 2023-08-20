#include "main.h"


/**
 * print_string - printed
 *
 * @s: string to be printed
 * Return: number of bytes printed
 */

int print_string(va_list s)
{
	char *str;
	int k;

	str = va_arg(s, char*);
	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}

	return (k);
}
