#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
* _realloc - this reallocates a memory block using malloc and free
* @old_size: the size of the previous memory block
* @ptr: the pointer to the previous memory block
* @new_size: the size of the new block
* Return: a pointer to the array, or NULL if it fails
*/

void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned	int	i;
	char	*aptr;

	if	(new_size == old_size)
		return	(ptr);
	if	(ptr == NULL)
	{
		aptr	=	malloc(new_size);
		if	(aptr == NULL)
			return	(NULL);
		return	(aptr);
	}
	else
	{
		if	(new_size == 0)
		{
			free(ptr);
			return	(NULL);
		}
	}
	aptr	=	malloc(new_size);
	if	(aptr == NULL)
		return	(NULL);

	for	(i = 0; (i < old_size) && (i < new_size); i++)
	{
		aptr[i]	=	((char *) ptr)[i];
	}
	free(ptr);
	return	(aptr);
}
