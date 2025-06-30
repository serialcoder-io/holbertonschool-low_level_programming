#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, but replaces
 * multiples of 3 with "Fizz", multiples of 5 with "Buzz",
 * and multiples of both with "FizzBuzz".
 *
 * Description: Each number or word is followed by a space.
 * Uses the standard library and prints to standard output.
 *
 * Return: 0 (Success).
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	return (0);
}
