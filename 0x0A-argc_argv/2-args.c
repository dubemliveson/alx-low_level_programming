#include <stdio.h>
#include "main.h"

/**
 * main - print the program 
 * @argc: count the arguments
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char argv[])
{
	/*Declaring Variables*/
	int count = 0;

	if (argc > 0)
	{
	/*WHILE - Print each arguments*/
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	}
	return (0);
}
