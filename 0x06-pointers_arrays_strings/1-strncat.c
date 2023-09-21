#include "main.h"

/**
 * *_strncat - Entry poiny
 *
 * Description: a function that concatenates two strings.
 *
 * @dest: a pointer
 *
 * @src: a pointer
 *
 * @n: number of bytes
 *
 * Return: the a string after we concat two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int s = 0;

	int i = 0;

	while (dest[s])
	{
		s++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[s + i] = src[i];
	}
	dest[s + i] = '\0';

	return (dest);
}
