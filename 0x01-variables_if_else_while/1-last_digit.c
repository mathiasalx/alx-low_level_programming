#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * print - Prints
 * @n: Int
 * @last_digit: Int
 * @followed_by: Char
 *
 * Return: 0
 */
int print(int n, int last_digit, char *followed_by)
{
	printf("Last digit of %d is %d and is %s \n", n, last_digit, followed_by);
	return (0);
}

/**
 * main - Main function
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	if (last_digit > 5)
	{
		print(n, last_digit, "greater than 5");
	}
	else if (last_digit == 0)
	{
		print(n, last_digit, "0");
	}
	else
	{
		print(n, last_digit, "less than 6 and not 0");
	}

	return (0);
}
