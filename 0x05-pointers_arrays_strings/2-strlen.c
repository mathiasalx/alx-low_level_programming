#include "main.h"

/**
 * _strlen - returns the length of s
 * @s: the string to return length for
 *
 * Return: int the length of s
 */
int _strlen(char *s)
{
	int strCount = 0;

	while (*s)
	{
		strCount++;
		s++;
	}

	return (strCount);
}
