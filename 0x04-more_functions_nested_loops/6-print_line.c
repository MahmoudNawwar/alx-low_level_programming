#include "main.h"
/**
 * print_line - draw stright line
 * @n:  number of times of char
 */

void print_line(int n)
{
	if (n == 0)
	{
		_putchar('\n')
	}
	else
	{
		int i;

		for (i == n; i > 0; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
