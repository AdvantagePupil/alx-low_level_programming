#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Entry point
 *
 * description:  a function that prints a struct dog
 *
 * @d: struct dog
 *
 * Return: always 0 (success)
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
