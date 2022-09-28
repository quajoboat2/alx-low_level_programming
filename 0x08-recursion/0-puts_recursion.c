#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: String
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
