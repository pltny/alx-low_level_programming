#include<stdio.h>

/**
 * min - entry point
 * Return:Always 0 (success)
 */
int main(void)
{
	int n = 48;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
                putchar(',');  
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
