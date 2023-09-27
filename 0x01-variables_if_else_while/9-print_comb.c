#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print 0, 1, - 9
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}
