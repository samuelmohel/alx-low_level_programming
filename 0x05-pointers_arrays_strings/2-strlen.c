#include "main.h"

/**
 * _strlen -> function to get the length of a string
 * @s: string pointer to passed to this function
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
