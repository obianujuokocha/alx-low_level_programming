#include "main.h"
#include <stdlib.h>

/**
 * create array -> a function that creates an array of chars, and initializes
 * it wi with a specific char
 * @size:the size of the character to be operated on
 * @c: the type
 * Return: if size == 0 or the function fails - NULL
 * otherwise - a pointerto the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index ++)
		array[index] = c;
	return (array);

}
