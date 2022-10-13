#include <stdio.h>

/**
 * print - prints content to stdout
 * @str: The string to print
 *
 * Description: prints the provided description to stdout using putchar
 *
 * Return 0
 */
int print(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	return (0);
}

/**
 * main - Main Function
 *
 * Description: prints exactly:
 * and that piece of art is useful" - Dora Korpar, 2015-10-19
 * followeed by a new line, to the standard error
 *
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	print(str);
	putchar('\n');

	return (1);
}
