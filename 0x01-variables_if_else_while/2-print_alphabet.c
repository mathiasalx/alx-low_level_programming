#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0
 */
int main(void)
{
	char *lowercase_letters = "abcdefghijklmnopqrstuvwxyz";

	while (*lowercase_letters)
	{
		putchar(*lowercase_letters);
		lowercase_letters++;
	}

	putchar('\n');

	return (0);
}
