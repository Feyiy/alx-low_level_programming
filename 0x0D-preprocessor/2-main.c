#include <stdio.h>

/**
 * main - this prints the name of the file compiled
 * from
 * Return: always return void
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}
