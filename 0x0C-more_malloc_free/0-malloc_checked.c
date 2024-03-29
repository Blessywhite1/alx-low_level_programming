#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked: allocate memory using malloc and check
 * @b: amount of bytes.
 * Return: if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
