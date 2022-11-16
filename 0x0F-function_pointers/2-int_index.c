#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: the array
 * @size: size of array
 * @cmp: pointer to function
 * Return: index of fist element for which cmp does not return 0, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		ret = cmp(array[i]);
		if (ret !0)
			return(i);
	}
	return (-1);
}
