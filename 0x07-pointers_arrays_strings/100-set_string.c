#include "main.h"

/**
 * set_string - Entry point
 *
 * description: a function that sets the value of a pointer to a char
 *
 * @s: pointer to pointer
 *
 * @to: pointer
 *
 * Return: sets the value of a pointer to a char.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
