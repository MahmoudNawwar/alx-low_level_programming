#include <stdio.h>
/**
 * main -a program Write a program that prints the alphabet in lowercase,
 *  followed by a new line.
 *
 * return (0) (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		else
			continue;
		letter++;
	}

	putchar('\n');

	return (0);
}
