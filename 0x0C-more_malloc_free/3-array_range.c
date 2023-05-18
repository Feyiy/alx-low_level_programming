#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - this creates an array of integers
* @min: the first element
* @max: the last element
* Return: this returns a pointer to the allocated memory
*/

int	*array_range(int min, int max)
{
	int	i,	j,	count,	value;
	int	*ptr;

	count	=	0;
	value	=	min;
	if	(min > max)
		return	(NULL);

	for	(i = min; i <= max; i++)
		count	=	count	+	1;

	ptr	=	malloc(sizeof(*ptr) * count);

	if	(ptr == NULL)
		return	(NULL);
	for	(j = 0; j < count; j++)
	{
		ptr[j]	=	value;
		value++;
	}
	return	(ptr);
}
