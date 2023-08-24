#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of linked list
 * @h: pointer to print the list_t list
 *
 * Return: the number of nodes printed in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%u] %s\n", h->len, (h->str) ? h->str : "(nil");
		h = h->next;
		count++;
	}

	return (count);
}

