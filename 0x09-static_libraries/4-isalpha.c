#include "main.h"

/**
 * _isalpha - the entry point
 * @c: the integer value it receives
 * Description: checks if alphabet is present
 * Return: 1 if it is true, 0 if false
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
