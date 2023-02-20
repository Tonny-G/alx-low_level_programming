#include <unistd.h>

/**
 * main - prints "and tha piece of art is useful" -Dora korpar 2015-10-19",
 * followed by a new line
 * Return: Always 1.
 */

int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpor, 2015-10-19\n",59);
	return (1);
}
