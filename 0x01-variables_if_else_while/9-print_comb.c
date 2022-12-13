#include<stdio.h>

/**
 * min - entry point
 * Return:Always 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n <= 58)
	{
		putchar(n);
		n++;
		putchar(',');  
		putchar(' ');
	}
	return (0);
}
