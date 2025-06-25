#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print al single digit of base 10
 * using the function putchar
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar('0' + digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
