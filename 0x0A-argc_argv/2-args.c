#include <stdio.h>
#include "main.h"
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{

		for (i = 0; i < argc; i++)
			printf("%s\n", argv[count]);

	}
	return (0);
}
