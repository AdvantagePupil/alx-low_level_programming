#include "variadic_functions.h"

/**
 * print_strings - Entry point
 *
 * description: a function that prints strings, followed by a new line
 *
 * @separator: separator
 *
 * @n: number of args
 *
 * Return: always 0 (success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}