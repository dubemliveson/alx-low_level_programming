#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * Description: uses the main function
 * this program prints all the letters except q and e
 * Return: 0
 */
int main(void)
{
	char ch;
	
	for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
return (0);
}
