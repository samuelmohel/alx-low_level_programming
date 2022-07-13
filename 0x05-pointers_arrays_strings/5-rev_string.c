#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len = 0;
	char tmp;
	
	while (s[i++])
		len++;


	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
