#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all numbers from a given number to 98
 * @n: the number to start counting from
 *
 * Description: Counts down to 98 if start is greater than 98,
 * otherwise counts up to 98.
 *
 * Return: nothing (void)
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		n += (n < 98) ? 1 : -1;
	}
	printf("98\n");
}
