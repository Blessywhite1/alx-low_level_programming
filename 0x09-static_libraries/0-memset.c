#include "main.h"

/**
 * _memset: sets the first count bytes of dest.
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
