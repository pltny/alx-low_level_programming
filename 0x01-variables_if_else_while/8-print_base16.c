#include<stdlib.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: printing hexadecimal
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int m;
	char n;
 /* exercutes hexadeciaaml*/
	for (m = 48; m < 58; m++)
	{
		putchar(m);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
