#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t nwdog;

	nwdog.name = name;
	nwdog.age = age;
	nwdog.owner = owner;
	return (&nwdog);
}
