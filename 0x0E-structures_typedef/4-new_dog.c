#include "dog.h"
#include <stdlib.h>

/**
 * _strnlen - Entry point
 *
 * description: a function that creates a new dog.
 *
 * @s: string
 *
 * Return: always 0 (success)
 */

int _strnlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcopy - Entry point
 *
 * @src: source
 *
 * @dest: destinationd
 *
 * Return: a;ways 0 (success)
 */

char *_strcopy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j]; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - Entry point
 *
 * description: a function that creates a new dog.
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: owner name
 *
 * Return: always 0 (success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 ||!owner)
	{
		return (NULL);
	}
	dog = (dog_t *) malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (_strnlen(name) + 1));

	if ((*dog).name == NULL)
	{
		free(dog);
		return(NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strnlen(owner) + 1));

	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
