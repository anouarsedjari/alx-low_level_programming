#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array
 * @size: element size in array
 * @cmp: pointer to function
 * Return: 0 (succes)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
