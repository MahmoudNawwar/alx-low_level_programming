#include "main.h"
/**
 * _isalpha - main function
 *
 * @c: charactar to compare
 *
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
