#include "main.h"

/**
  * *_strncpy - copies a string
  * @dest: 1st String
  * @src: 2nd String
  * @n: number of bytes from src
  *
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int l = 0, i = 0;


	while (src[i++])
		l++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = l; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
