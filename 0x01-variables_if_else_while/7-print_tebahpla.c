#include <stdio.h>
/**
 * main -a program print from z to a
 *
 * Return: (0) (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
