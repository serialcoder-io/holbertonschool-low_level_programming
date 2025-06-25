#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit_base_10 = 0;
	char digit_base_16_lower = 'a';

	while (digit_base_10 <= 9)
	{
		putchar('0' + digit_base_10);
		digit_base_10++;
	}

	while (digit_base_16_lower <= 'f')
	{
		putchar(digit_base_16_lower);
		digit_base_16_lower++;
	}
	putchar('\n');

	return (0);
}
