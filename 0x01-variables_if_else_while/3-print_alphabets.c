#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 *
 * Description - prints both upper and lower case letters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int z = 'a';
	int Z = 'A';

	while (z <= 'z')
	{
		putchar(z);
		z++;
	}
	while (Z <= 'Z')
	{
		putchar(Z);
		Z++;
	}
	putchar('\n');
	return (0);
}
