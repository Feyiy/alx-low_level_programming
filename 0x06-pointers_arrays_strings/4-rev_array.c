#include "main.h"

/**
  * reverse_array - reverses an array
  * @a: array to be reversed
  * @n: numbers of intigers in the array
  *
  * Return: Nothing
  */

void reverse_array(int *a, int n)
{
	int i, atmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		atmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = atmp;
	}
}
