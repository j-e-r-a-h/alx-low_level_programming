#include "main.h"
#include <stdio.h>

/**
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 *@s: first value
 *@b: second value
 *@n: thirth value
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
