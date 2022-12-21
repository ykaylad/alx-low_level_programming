#include "main.h"

/**
 * _puts - write a function that prints a string, followed by new line, to
 * stdout.
 *
 * @str: This is my input string
 * Reteurn: nothing on success
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
