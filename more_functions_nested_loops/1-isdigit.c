#include <ctype.h>

/**
 * _isdigit - Checks if a character is digit (0 through 9).
 * @c: The character to check.
 *
 * Description: This function takes a character as input and
 * returns 1 if the character is a digit (0 throug 9),
 * or 0 otherwise.
 *
 * Return: 1 if the character is digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (isdigit((unsigned char)c) ? (1) : (0));
}
