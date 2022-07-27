#include "main.h"
#include <stdlib.h>
/**
 * _strdup -> function that return a pointer to a nely allocated space
 * @str: the string to be copied
 * in memory, which containes a copy of the string given as a parameter.
 * Return: if str == Null or insufficient memory is available -  NULL.
 * otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
