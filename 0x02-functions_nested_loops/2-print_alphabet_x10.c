#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the aplhabet, in lowercase
 * followed by new line
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	i++;
	}
}

