#include "main.h"

/**
 * *string_toupper - Entry point
 *
 * description: a function that changes all lowecase to uppercase
 *
 * @*: pointer
 *
 * Return: the characters in uppercase
 */

char *string_toupper(char *chr)
{
	int i;

	for (i = 0; chr[i] != '\0'; i++)
	{
		if (chr[i] >= 97 && chr[i] <= 122)
		{
			chr[i] = chr[i] - 32;
		}
	}
	return (chr);
}
