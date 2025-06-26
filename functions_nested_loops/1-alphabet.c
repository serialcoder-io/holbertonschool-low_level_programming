#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase followed by a new line
 * by calling print_alphabet function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}


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
