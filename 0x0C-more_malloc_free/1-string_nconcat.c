#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat - this concatenates two strings
* @s1: the pointer to destination string
* @s2: the pointer to source string
* @n: the first number of bytes to concatenate
* Return: a pointer to the array, or NULL if it fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k, len, len1;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;

	for (k = 0; s1[k] != '\0'; k++)
	{
		len1 = len1 + 1;
	}
	len = len1 + n;
	ptr = (char *)	malloc((len * sizeof(char)) + 1);

	if (ptr == NULL)
		return (NULL);

	j = 0;

	for (i = 0; i < len; i++)
	{
		if (i <= len1)
			ptr[i] = s1[i];
		if (i >= len1)
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	ptr[len] = '\0';
	return (ptr);
}
