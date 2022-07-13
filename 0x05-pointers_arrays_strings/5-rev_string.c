#include "main.h"
/**
 * rev_string -> A function that reverses a string
 * @s: character to be reversed
 */

void rev_string(char *s)
{
	int i , j;
	char x;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	i = i - 1;
	for (j = 0; j <= i / 2; j++)
	{
		x = s[j];
		s[j] = s[i - j];
		s[i- j] = x;
	}
}
	
