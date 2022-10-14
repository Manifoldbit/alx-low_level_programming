#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches index for the given number
 * @array: the array of numbers
 * @size: the size of an array
 * @cmp: a function to compare the elements in array
 * Return: the index of the matched number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	count = 0;
	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			count = cmp(array[i]);
			if (count != 0)
				return (i);
		}
	}
	return (-1);
}
