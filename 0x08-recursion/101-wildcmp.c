#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - this returns the length of a string
 *                   overlook wildcard characters
 * @str: string to be measured
 *
 * Return: length
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}

	return (len);
}

/**
 * iterate_wild - iterates through a string located at a wildcard
 *                until it points to a non-wildcard character
 * @wildstr: string to be iterated through
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - this checks if a string str matches the postfix of
 *                 another string potentially containing wildcards
 * @str: string to be matched
 * @postfix: the postfix
 *
 * Return: if str and postfix are identical - a pointer to the null byte is
 *                                            located at the end of postfix
 *         Otherwise - a pointer to the first unmatched character in postfix
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - this compares two strings, considering wildcard characters
 * @s1: first string to be compared
 * @s2: second string to be compared - may contain wildcards
 *
 * Return: if the strings can be considered identical - 1
 *         Otherwise - 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
