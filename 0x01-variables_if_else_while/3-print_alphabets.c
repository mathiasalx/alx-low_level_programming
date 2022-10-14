#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0
 */
int main(void)
{
	char *uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lowercase_letters = "abcdefghijklmnopqrstuvwxyz";

	while (*lowercase_letters)
	{
		putchar(*lowercase_letters);
		lowercase_letters++;
	}

	while (*uppercase_letters)
	{
		putchar(*uppercase_letters);
		uppercase_letters++;
	}

	putchar('\n');

	return (0);
}
