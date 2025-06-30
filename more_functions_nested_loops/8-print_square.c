#include "main.h"

/**
 * print_square - Prints a square using the character #.
 * @size: The size of the square.
 *
 * Description: Uses _putchar to print a square of size x size
 * using the character #. If size is 0 or less, only a newline
 * is printed.
 *
 * Return: Nothing.
 */
void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
