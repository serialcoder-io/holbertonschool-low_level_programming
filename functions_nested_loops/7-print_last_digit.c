#include <stdlib.h>

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
	return (abs(n % 10));
}
