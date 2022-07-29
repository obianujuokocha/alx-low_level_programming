#include <stdlib.h>

/**
 * _calloc - a function that allocate memory
 * for an array, using malloc.
 * @nmemb: number of members
 * @size: size of each member
 *
 * Return: pointer to the array or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, totalsize = nmemb * size;
	char *array;

	if (totalsize == 0)
		return (NULL);

	array = malloc(totalsize);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < totalsize; i++)
		array[i] = 0;
	return (array);
}
