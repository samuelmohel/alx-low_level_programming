#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: it prints the word _putchar, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	char word[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
