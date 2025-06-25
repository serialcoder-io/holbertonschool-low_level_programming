#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print al single digit of base 10
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
