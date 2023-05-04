#include "main.h"

/**
  * *_strncat - concatenates two strings
  * @dest: string 1
  * @src: string 2
  * @n: number of bytes from src
  *
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0, i = 0;

	while (dest[i++])
		l++;
	for (i = 0; src[i] && i < n; i++)
		dest[l++] = src[i];
	return (dest);
}
