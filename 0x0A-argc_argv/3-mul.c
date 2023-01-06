#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if it works, 1 if there is an ERROR
 */
int main(int argc, char **argv)
{
	int i, j, multi;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		multi = n * m;

		printf("%i\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
