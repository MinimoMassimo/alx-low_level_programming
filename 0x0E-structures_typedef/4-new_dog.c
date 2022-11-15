#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nwdog;
	int sname, sowner;

	for(sname = 0; name[sname]; sname++)
	;
	for(sowner = 0; owner[sowner]; sowner++)
	;
	nwdog->name = name;
	nwdog->age = age;
	nwdog->owner = owner;
	return (nwdog);
}
