#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: always 0.
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
gcc-wall-pedantic-werror-wextra-std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x04$./1-isdigit
