#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of jack bauer
 *
 * Description: start from 00:00 to 23:59
 * followed by a new line
 *
 * Return: Nothing (void)
 */
void jack_bauer(void)
{
	int minutes, hours;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			printf("%02d:%02d\n", hours, minutes);
		}
	}
}
