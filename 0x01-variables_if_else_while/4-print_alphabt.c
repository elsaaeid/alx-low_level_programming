#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all alphabet letters except q and e
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
