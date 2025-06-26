#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description: prints the alphabet in lowercase 10 times,
 * each followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int index;
	char ch;

	for (index = 0; index < 10; index++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
