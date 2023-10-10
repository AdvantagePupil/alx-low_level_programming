#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Entry point
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: dog owner
 *
 * Return: 0 always (succuss)
 */

struct dog
{
	char *name;

	float age;

	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
