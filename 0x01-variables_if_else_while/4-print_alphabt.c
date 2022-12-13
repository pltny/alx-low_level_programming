#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 *
 * Description - prints all letters except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int z = 'a';
while (z <= 'z')
	{
	if ((z != 'q') && (z != 'q'))
	{
		putchar(z);
	}
	z++;
	}
	putchar('\n');
	return (0);
}
