#include "main.h"

/**
 * _puts - this prints a string and a new line
 * @str: the pointer of a string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
