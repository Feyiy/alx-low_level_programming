#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: string 1
  * @s2: String 2
  *
  * Return: 0 if s1 = s2, positive if s1 > s2, negative  if s1 < s2
  */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
