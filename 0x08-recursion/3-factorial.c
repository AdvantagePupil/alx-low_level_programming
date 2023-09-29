#include "main.h"

/**
 * factorial - Entry point
 *
 * description: a function that returns the factorial of a given number.
 *
 * @n: integer
 *
 * Return: always 0 (success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
