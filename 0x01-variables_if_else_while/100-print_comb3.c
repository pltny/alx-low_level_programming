#include<stdio.h>

/**
 * main - prints out all possible combinations
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int ones = '0';
	int tens = '9';

	for (tens = '0'; tens <= '9'; tens)
	{
		if(!((ones == tens) || (tens > ones)))
		{
			putchar(tens);
			putchar(ones);
			if (!(ones == '9' && tens == '8'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
