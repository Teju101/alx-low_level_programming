#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: a char
 * Return: the result
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		continue;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';

	return (s);
}
