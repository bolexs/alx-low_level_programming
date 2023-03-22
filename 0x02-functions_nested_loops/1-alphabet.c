#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
