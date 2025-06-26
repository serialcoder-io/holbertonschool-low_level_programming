#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if a character is an alphabetic character of not
 *@c: the character to check if it is alphabetic
 *
 * Description: return 1 if c is an alphabetic character
 * 0 if it is not
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
