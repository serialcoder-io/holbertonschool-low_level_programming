#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - return last digit of given number
 * @n: the number we to return the last digit
 *
 * Description: return the last digit of given number
 * eg print_digit(68) -> 8
 *
 * Return: return the last digit of given number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit);
	return (last_digit);
}
