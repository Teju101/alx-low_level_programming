#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b: an unsigned integer
 *
 * Return: Nothing to return
 */
void *malloc_checked(unsigned int b)
{
	void *prt;

	prt = malloc(b);
	if (prt == NULL)
	{
		exit(98);
	}
	return (prt);
}
