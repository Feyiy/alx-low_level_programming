#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - this executes the funtion given to @array on each @size elements
 * @array: this is an array of integers
 * @size: the size of the array
 * @action: the function pointer
 *
 * Return: Always nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
