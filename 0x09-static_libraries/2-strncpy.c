#include "main.h"

/**
 * *_strncpy - Entry point
 *
 * description: a function that copies a string.
 *
 * @dest: a pointer
 *
 * @src: a pointer
 *
 * @n: number of bytes
 *
 * Return: the coipied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
