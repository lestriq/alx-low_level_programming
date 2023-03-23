#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
	}
	_putchar('\n');

}
