#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character _ should be printed.
 *
 * Description: Uses _putchar to print a line of underscores.
 * If n is 0 or less, only a newline is printed.
 *
 * Return: Nothing.
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
