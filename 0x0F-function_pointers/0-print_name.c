#include "function_pointers.h"

/**
 * print_name - Entry point
 *
 * description:  a function that prints a name.
 *
 * @name: name
 *
 * @f: pointer
 *
 * Return: always 0 (success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
