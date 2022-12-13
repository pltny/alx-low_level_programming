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
		if (n != 57)
		{
                putchar(',');  
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
