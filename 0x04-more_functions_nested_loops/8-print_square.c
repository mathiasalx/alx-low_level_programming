#include "main.h"

/**
 * print_square - prints square, followed by a new line
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int y;

	for (y = 0; y < size; y++)
	{
		int x;

		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
