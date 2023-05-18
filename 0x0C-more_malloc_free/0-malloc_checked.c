#include "main.h"

/**
 * malloc_checked: this causes normal process termination with a status value of 98
 *
 * @b: the allocated memory
 *
 * Return: this returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);

	return (i);

}
