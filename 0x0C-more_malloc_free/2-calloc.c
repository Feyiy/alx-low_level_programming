#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
* _calloc: this returns a pointer to a 2 dimensional array of integers
* @size: the length of the array
* @nmemb: the number of arrays
* Return: a pointer to the array, or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
