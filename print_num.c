#include "main.h"


/**
 * print_num - prints number
 *
 * @num: number to be printed
 * Return: void
 */

int print_num(int num)
{
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
		counter++;
		_putchar(digit[numDigits]);
	}

	return (counter);
}

/**
 * print_string - printed
 *
 * @s: string to be printed
 * return: void
 */
void print_string(char *s)
{
	int k;
	for (k = 0; s[k]; k++)
		_putchar(s[k]);
}
/**
 * _strlenn - to find the length of string
 * @s:The input string
 *
 * Return: The length of string.
 */
int strlenn (const char *s)
{
	int len = 0;
	if(s == NULL)
		return 0;
	while (s[len] != '\0')
		len++;

	return (len);
}
/**
 * _strcmp = = comparest to strings
 *
 * @s: first string
 * @t second string
 * Return: 1 or 0
 */

int _strcmp(const char *s, const char *t)
{
        int i, len1, len2;

        len1 = strlenn(s);
        len2 = strlenn(t);
        if (len1 == len2)
        {
                for (i = 0; len1; i++)
        {
                if (s[i] != t[i])
                        return (0);
        }
        }
        else
                return (0);

        return (1);
}
