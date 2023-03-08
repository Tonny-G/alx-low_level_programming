#include "main.h"

/**
 * The _memcpy() function copies n bytes from memory area src to memory area dest
 * @dest: pointer to the memory area where data will be copied
 * @src: pointer to the memory area from which data will be copied
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for ( i = 0; i < n; i++)
	{
		dest[i]=src[i];
	}
	return(dest);
}
