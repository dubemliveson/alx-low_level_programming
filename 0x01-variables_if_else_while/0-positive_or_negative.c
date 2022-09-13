#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if the number is positive, zero or negative
 * Description: This program will assign a random number to the variable n,
 * each time it is executed
 * Return: (0);
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*my code goes here*/
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}

	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
