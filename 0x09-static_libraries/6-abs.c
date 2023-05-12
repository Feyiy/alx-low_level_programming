#include "main.h"

/**
 * _abs - the entry point
 * @n: n is an integer
 * Description: this prints the absolute value of an integer
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
