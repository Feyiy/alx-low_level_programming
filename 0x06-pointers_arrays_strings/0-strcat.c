#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char strings
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int l = 0, i = 0;

	while (dest[i++])
		l++;
	for (i = 0; src[i]; i++)
		dest[l++] = src[i];
	return (dest);
}
