#include "main.h"

/**
 * _print_rev_recurson - print a string in reverse
 * @s:a pointer to the string to print in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
