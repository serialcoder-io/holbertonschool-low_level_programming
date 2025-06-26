#include "main.h"
#include <ctype.h>

/**
 * _islower - check if a character is lowercase or not
 *@c: the character to check if it is lowercase
 *
 * Description: return 1 if c is lowercase, 0 otherwise
 *
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
