#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry poiny
 * @s1: a character
 * @s2: a character
 * @n: an int
 * Return: the result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size1, size2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = size2 = 0;
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	if (n > size2)
		n = size2;

	str = malloc(size1 + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];

	str[i] = '\0';

	return (str);
}
