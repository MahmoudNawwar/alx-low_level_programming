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
	if ((c >= 'A' && c <= 'Z') || (c >= 'z' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
