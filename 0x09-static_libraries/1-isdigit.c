#include "main.h"

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

/**
 * _isdigit: check whether the character 
 * numeric character from 0 to 9 or not
 *@c: char to check
* Return:  0 or 1
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
} 
