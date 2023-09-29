#include "main.h"

/**
 * is_prime_number - Entry point
 *
 * description: a function that returns 1 if the input integer is a prime
 *
 * @n: int
 *
 * Return: 1 if int or 0 if not
 */
int check_prime(int n, int j);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Entry point
 *
 * description: a function that checks if the numbers < n are prime
 *
 * @n: int
 *
 * @j: int
 *
 * Return: 1 if int or 0 if not
 */

int check_prime(int n, int j)
{
	if (j >= n && n > 1)
	{
		return (1);
	}
	else if (n % j == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, j + 1));
	}
}
