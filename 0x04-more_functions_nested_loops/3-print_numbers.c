#include "main.h"

/**
 * print_numbers - print num from 0-9
 * Return: Always 0.
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar ('\n');
}
