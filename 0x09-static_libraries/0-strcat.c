#include "main.h"

/**
 * _strcat: concatenates the destination string and the source
 * string and the result is stored in the destination string.
 * @dest: dest
 * @src: src
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int count1 = 0, count2 = 0;

	while (*(dest + count1) != '\0')
	{
		count1++;
	}

	while (count2 >= 0)
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count1++;
		count2++;
	}
	return (dest);
}
