#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char strings
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int n, c;

	for (n = 0; dest[n] != '\0'; n++)
                ;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[n] = src[c];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
