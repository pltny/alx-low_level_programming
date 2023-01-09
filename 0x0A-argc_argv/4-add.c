#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv:argument vector
 *
 * Return:always 0
 */
int main(int argc, char *argv[])
{
	int j;
	unsigned int l, sum = 0;
	char *m;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			m = argv[j];

			for (l = 0; l < strlen(m); l++)
			{
				if (m[l] < 48 || m[l] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(m);
			m++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
