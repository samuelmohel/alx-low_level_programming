#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - Check if paramter c represents an uppercase letter.
 * @c: Int representing a character
 * Return: Always 0.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
