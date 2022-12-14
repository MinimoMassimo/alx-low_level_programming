#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function
 * Return: nothing, its void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!size || !action || !array)
		return;
	for (i = 0; i < size; i++)
	{
		if (!array[i])
			return;
		action(array[i]);
	}
}
