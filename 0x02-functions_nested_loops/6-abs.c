#include "main.h"

/**
 * _abs - Entry point
 *
 * _abs description : a function that computes the absolute value of an integer
 *
 * @c:the input is integer
 *
 * Return: absolute value of a number
 */

int _abs(int i)
{

	if (i < 0)
	{
		int abs_val = i * -1;
		return (abs_val);
	}
	return (i);
}
