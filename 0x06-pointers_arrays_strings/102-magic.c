#include <stdio.h>

/**
 * main - magic
 * - You are not allowed to use the variable a
 * - You are not allowed to modify p
 * - only one statement
 * (p + 5) =98;
 * ....so that this prints 98\n 
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
