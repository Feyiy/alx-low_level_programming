#include "main.h"

/**
 * clear_bit - this sets the opposite of the mask
 * @num: the number to set
 * @index: the position
 * Return: 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask <<= index;
	*num &= ~mask;

	return (1);
}
