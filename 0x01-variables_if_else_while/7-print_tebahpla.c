#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print a-z in reverse
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
