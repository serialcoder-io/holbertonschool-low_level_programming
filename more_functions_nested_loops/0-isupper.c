#include <ctype.h>

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to check.
 *
 * Description: This function takes a character as input and
 * returns 1 if the character is an uppercase letter (A-Z),
 * or 0 otherwise.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(char c)
{
	return (isupper((unsigned char)c) ? (1) : (0));
}
