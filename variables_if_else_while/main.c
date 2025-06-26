#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: training with getchar function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	printf("Installing packages.\n");
	printf("type y/Y or q/Q to continue or quit.\n");
	c = getchar();
	if (c == 'y' || c == 'Y')
	{
		printf("Package 1 installed 100%%[------------------------]\n");
		printf("Package 2 installed 100%%[------------------------]\n");
		printf("2 packages installed: 100%%\n");
		printf("0 vulnerability detected✅\n");
		printf("Done: installation completed successfully!🎉🎉\n");
	}
	else if (c == 'q' || c == 'Q')
	{
		printf("Exited\n");
	}
	else
	{
		printf("unkwow character: installation cancelled\n");
	}
	return (0);
}
