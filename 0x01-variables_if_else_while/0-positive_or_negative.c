#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * main: The main block 
 * Description: It gets a random number and prints the number 
 * if the number is positive, negative or zero then it should
 * Return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
