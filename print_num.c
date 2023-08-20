#include "main.h"


/**
 * print_num - prints number
 *
 * @num: number to be printed
 * Return: void
 */

int print_num(va_list n)
{
        int num = va_arg(n, int);
        char digit[10];
        int numDigits = 0;
        int counter = 0;
        if (num == 0)
        {
                _putchar('0');
                counter++;
                return counter;
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

        return counter;
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
