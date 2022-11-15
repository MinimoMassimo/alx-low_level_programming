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

	nwdog = malloc(sizeof(*nwdog));
	if (nwdog == NULL)
	{
		free(nwdog);
		return (NULL);
	}
	for (sname = 0; name[sname]; sname++)
	;
	for (sowner = 0; owner[sowner]; sowner++)
	;
	nwdog->name = malloc(sname + 1);
	nwdog->owner = malloc(sowner + 1);
	if (!nwdog->name || !nwdog->owner)
	{
		free(nwdog->name);
		free(nwdog->owner);
		free(nwdog);
		return (NULL);
	}
	nwdog->name = name + "\0";
	nwdog->age = age;
	nwdog->owner = owner;
	return (nwdog);
}
