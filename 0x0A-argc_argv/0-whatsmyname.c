#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("Usage: just enter the program name");
	}
	printf("%s\n", argv[0]);
	return (0);
}
