#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet except q and e
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{

			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
