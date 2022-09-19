#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Description: using the putchar function in every other function
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
