#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: unsigned int
 * @c: a character
 * Return: the result
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	i = 0;
	a = malloc(size * sizeof(c));
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
