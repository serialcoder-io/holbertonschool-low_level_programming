#include "main.h"

/**
 * print_alphabet - print the alphaet in lowercase
 *
 * Description: prinit alphabet in lowercase folled by a new line
 *
 * Return: Always void (nothing)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
