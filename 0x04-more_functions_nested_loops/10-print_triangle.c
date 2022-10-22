#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		int spaces = size - i;
		int si;
		int hi;

		for (si = 0; si < spaces; si++)
		{
			_putchar(' ');
		}

		for (hi = 0; hi < i; hi++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
