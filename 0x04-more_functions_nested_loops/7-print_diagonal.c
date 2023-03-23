#include "main"
/*
 * print_diagonal - draw a line of \
 * @n: the count of \
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			__putchar('\\');
		}

		_putchar('\n');
	}
}
