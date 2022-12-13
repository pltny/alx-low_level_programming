#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Description - printing numbers in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
