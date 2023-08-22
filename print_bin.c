#include "main.h"

/**
 * print_bin - print binary representation of a number
 *
 * @arr: argument to be checked
 * Return: integer
 */

int  print_bin(va_list arr)
{
	unsigned long int num = va_arg(arr, unsigned int);
	unsigned int i, rem, dup;
	char *string;
	char c;
	int len;

	dup = num;
	len = 0;
	while (num > 0)
	{
		len++;
		num /= 2;
	}
	string = malloc(sizeof(char) * len);
	if (string == NULL)
	{
		free(string);
		return (-1);
	}


	i = 0;
	while (dup > 0)
	{
		rem = dup % 2;
		c = rem + '0';
		string[i] = c;
		dup /= 2;
		i++;
	}
	while (len >= 0)
	{
		_putchar(string[len]);
		len--;
	}

	free(string);
	return (len);
}
