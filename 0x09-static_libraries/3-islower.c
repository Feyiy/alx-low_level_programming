#include "main.h"

/**
 * _islower - entry point
 * Description: this checks if a character is in lowercase
 * @c: the integer value it receives
 * Return: 1 if it is true, 0 if false
 */
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
