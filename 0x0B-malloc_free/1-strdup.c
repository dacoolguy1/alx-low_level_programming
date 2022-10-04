#include "main.h"

#include <stdlib.h>

/**
 * _strdup - return a pointer to newly allocatedspace memory.
 * @str: string
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *dupli, *copy;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (copy = str; *copy != '\0'; copy++)
		len++;
	dupli = malloc(len + 1);
	if (dupli == NULL)
		return (NULL);
	_strcpy(dupli, str);
	return (dupli);
}
