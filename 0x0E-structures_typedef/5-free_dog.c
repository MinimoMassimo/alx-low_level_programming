#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: the dog object
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
