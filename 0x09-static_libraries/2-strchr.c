#include "main.h"

/**
 * _strchr - this locates a character in a string
 * @s: the string to be searched for
 * @c: the character to be located
 *
 * Return: if c is found
 * If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
