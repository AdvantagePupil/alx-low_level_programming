#include "main.h"

/**
 * *_memcpy - Entry point
 *
 * description:  a function that copies memory area.
 *
 * @dest: memory area
 *
 * @src: bytes from memory area
 *
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
