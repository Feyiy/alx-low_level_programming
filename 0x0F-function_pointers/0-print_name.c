#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - this prints a name
 * @name: the array that stores the name
 * @f: the function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
