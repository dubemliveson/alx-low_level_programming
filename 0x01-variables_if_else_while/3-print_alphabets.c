#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Description: using the main function
 * alphabets are printed using the putchar function
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
	for (ch = 'A'; ch <= 'Z'; ch++)
{
	puchar(ch);
}
putchar('\n');
return (0);
}
