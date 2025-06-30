#include "main.h"

/**
 * print_triangle - Prints a triangle using the character #.
 * @size: The size of the triangle.
 *
 * Description: Prints a right-aligned triangle where each row
 * increases in width by one #. If size is 0 or less, only a
 * newline is printed.
 *
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= (size - i))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
