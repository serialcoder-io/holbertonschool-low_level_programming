#include "main.h"

/**
 * print_sign - print sign
 * @n: the number we want to check the sign
 *
 * Description: check the sign of a number
 * return 1 and print + is n is greater than 0
 * return 0 and print 0 if n is equal to zero
 * retunr -1 and print - if n is less than zero
 *
 * Return: 0 or 1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
