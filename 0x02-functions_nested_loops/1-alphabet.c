#include "main.h"

/**
 * main - point  function that prints the alphabet lowercase
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
	
	_putchar('\n');
}

