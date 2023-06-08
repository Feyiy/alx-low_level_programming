#include "main.h"

/**
 * set_bit - this sets a specific bit at a particular position
 * @num: the pointer to the bit being set
 * @index: the position being referred to
 * Return: 1 if success, -1 if fail
 */

int set_bit(unsigned long int *num, unsigned int index)
{
	/* this creates a mask to hold the bit */
	unsigned long int mask = 1;

	/* if the index is greater than the required, return -1 */
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	/* this shifts the mask left to the required index */
	mask <<= index;
	/* this returns the new number or the mask */
	*num = *num | mask;
	return (1);
}
