#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 *
 * Description - printing 0 to 10
 *
 * return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
