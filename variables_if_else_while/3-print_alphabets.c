#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase and uppercase
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower_ch = 'a';
	char upper_ch = 'A';

	while (lower_ch <= 'z')
	{
		putchar(lower_ch);
		lower_ch++;
	}

	while (upper_ch <= 'Z')
	{
		putchar(upper_ch);
		upper_ch++;
	}
	putchar('\n');

	return (0);
}
