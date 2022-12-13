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

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
