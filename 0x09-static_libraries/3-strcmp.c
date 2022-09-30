#include "main.h"

/**
 * _strcmp - comapres pointers to two strings
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
