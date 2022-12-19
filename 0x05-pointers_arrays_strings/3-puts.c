#include "main.h"

/**
 * _puts - write a function that prints a string, followed by new line, to
 * stdout.
 *
 * @str: This is my input string
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
