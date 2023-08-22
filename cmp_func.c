#include "main.h"

/**
 * cmp_func - Returns a function pointer to a matching function.
 * @a: Character input.
 *
 * Return: Function pointer to a matching function, or 0 if no match is found.
 */

int (*cmp_func(const char a))(va_list)
{
	myprintf printf[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_num},
		{'i', print_num},
		{'b', print_bin},
		{'\0', NULL}
	};

	int k;

	for (k = 0; printf[k].p != '\0'; k++)
	{
		if (printf[k].p == a)
		{
			return (printf[k].func);
		}
	}

	return (0);
}
