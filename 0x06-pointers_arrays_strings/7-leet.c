#include "main.h"

/**
 * *leet - Entry point
 *
 * description: Write a function that encodes a string into 1337
 *
 * @s: string
 *
 * Return: the string in 1337 code
 */

char *leet(char *s)
{
	char *encoded = s;

	char letter[] = {'A', 'O', 'E', 'T', 'L'};

	int code[] = {4, 0, 3, 7, 1};

	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(letter) / sizeof(char); i++)
		{
			if (*s == letter[i] || *s == letter[i] + 32)
			{
				*s = 48 + code[i];
			}
		}
		s++;
	}
	return (encoded);
}
