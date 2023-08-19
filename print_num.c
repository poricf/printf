#include "main.h"


/**
 * print_num - prints number
 *
 * @num: number to be printed
 * Return: void
 */

void print_num(int num)
{
	char digit[10];
	int numDigits = 0;

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
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
		_putchar(digit[numDigits]);
	}
}
