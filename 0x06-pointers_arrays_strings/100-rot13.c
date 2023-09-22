#include "main.h"

/**
 * *rot13 - Entry point
 *
 * description: a function that encodes a string using rot13.
 *
 * @i: input
 *
 * Return: the string encoded
 */

char *rot13(char *i)
{
	int j;

	char input[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char output[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	char *encoded = i;

	while (*i)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*i == input[j])
			{
				*i = output[j];
				break;
			}
		}
		i++;
	}
	return (encoded);
}
