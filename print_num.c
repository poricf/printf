#include "main.h"


/**
 * print_num - prints number
 *
 * @n: number to be printed
 * Return: nBytes printed
 */

int print_num(va_list n)
{
	long int num = va_arg(n, int);
	char digit[10];
	int numDigits = 0;
	int counter = 0;

	if (num == 0)
	{
		_putchar('0');
		counter++;
		return (counter);
	}
	else if (num < 0)
	{
		_putchar('-');
		counter++;
		num = -1 * num;
	}
	while (num > 0)
	{
		digit[numDigits] = (num % 10) + '0';
		num /= 10;
		numDigits++;
	}
	while (numDigits > 0)
	{
		numDigits--;
		counter++;
		_putchar(digit[numDigits]);
	}
	return (counter);
}

