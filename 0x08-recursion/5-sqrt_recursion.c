#include "main.h"

/**
 * _sqrt_recursion - Entry point
 *
 * description: a function that returns the natural square root of a number.
 *
 * square - Entry point
 *
 * @n: int
 *
 * Return: always 0 (success)
 */

int square(int n, int j);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * _sqrt_recursion - Entry point
 *
 * description: a function that returns the natural square root of a number.
 *
 * square - Entry point
 *
 * @n: int
 *
 * @j: value
 *
 * Return: always 0 (success)
 */

int square(int n, int j)
{
	if (j * j == n)
		return (j);
	else if (j * j < n)
		return (square(n, j + 1));
	else
		return (-1);
}
