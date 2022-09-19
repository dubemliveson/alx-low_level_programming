#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Description: program uses putchar function
 *
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
