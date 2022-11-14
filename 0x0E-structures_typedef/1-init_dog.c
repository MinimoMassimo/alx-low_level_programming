#include "main.h"

/**
 * init_dog - initializes struct dog
 * @d: object struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
