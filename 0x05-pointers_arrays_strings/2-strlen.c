#include "main.h"

/**
 * _strlen - Function that returns the lenght of a string
 *
 * @s: this is the input string
 *
 * Return: Lenght of the string
 */
int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{index++;
		s++;
	}
	return (index);
}
