#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t
 * @h: head of list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != 0)
	{
		h = h->next;
		num++;
	}
	return (num);
}
