#include "main.h"

/**
 * main - new doings
 * Description: writes alpahbets in lowercase with function print_alphabet
 *
 * void print_alphabet - function to print lowercase alphabets
 * @void: does the job
 *
 * Description: new stuff
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
