#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 *@dest: the address of memory to print
 *@src: second value
 *@n: third value
 *
 * Return: char with result of memcpy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
