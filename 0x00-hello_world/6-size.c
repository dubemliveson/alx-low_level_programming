#include <stdio.h>

/**
 * main - prints the size of various types on the computer
 *
 * Description: using the printf command
 * this program prints the size of various types on the computer
 * Return : 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %l byte(s)\n", sizeof(c));
	printf("Size of an int: %l byte(s)\n", sizeof(i));
	printf("Size of a long int: %l byte(s)\n", sizeof(li));
	printf("Size of a long long int: %l byte(s)\n", sizeof(lli));
	printf("Size of a float: %l byte(s)\n", sizeof(f));
	return (0);
}
