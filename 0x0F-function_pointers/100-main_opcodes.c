#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int j, bite;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bite = atoi(argv[1]);

	if (bite < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < bite; j++)
	{
		printf("%02x", opc[j] & 0xFF);
		if (j != bite - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
