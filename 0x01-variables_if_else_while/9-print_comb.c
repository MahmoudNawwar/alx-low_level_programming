#include <stdio.h>
/**
 * main -a program that print from 1 to 0
 * with ' ' and ','
 *
 * Return: (0) (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 9)
		{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		}
		else if (i == 9)
		{
			putchar(9 + '0')
		
	}

	putchar('\n');

	return (0);
}
