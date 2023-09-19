#include "main.h"

/**
 * *_strcpy - Entry point
 *
 * description: a function that copies the string pointed to by src
 *
 * @dest: a pointer
 *
 * @src: a pointer
 *
 * Return: the string pointed to by src
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != 0);

	return (dest);
}
