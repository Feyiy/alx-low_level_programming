#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - this adds two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this  finds the difference between two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the difference between @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this computes the product of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this divides an integer by another integer
 * @a: the dividend (the integer to be divided)
 * @b: the divisor
 * Return: the quotient of @a and @b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - this computes the remainder from the division of @a by @b
 * @a: the dividend (the integer that is divided)
 * @b: the divisor (the integer that divides
 * Return: the remainder from @a divided by @b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
