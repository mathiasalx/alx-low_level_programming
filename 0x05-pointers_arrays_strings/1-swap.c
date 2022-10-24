#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: first value
 * @b: second value
 *
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
	int tmpA = *a;

	*a = *b;
	*b = tmpA;
}
