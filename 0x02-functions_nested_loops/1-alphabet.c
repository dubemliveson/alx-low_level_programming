#include "main.h"

/**
 * main - new doings
 * Description: writes alpahbets in lowercase with function print_alphabet
 *
 * print_alphabet - function to print lowercase alphabets
 * @a: void
 * @b: prints alphabets
 *
 * Result:0;
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
}
