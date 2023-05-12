#include "main.h"

/**
 * _strlen - this checks the length of a string
 * @s: the string to check
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
