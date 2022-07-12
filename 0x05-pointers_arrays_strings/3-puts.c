#include "main.h"
/**
 * _puts - A function that print a string folloed by a new line
 * @str: string
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
