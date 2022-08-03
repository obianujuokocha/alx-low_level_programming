#include <stdio.h>

/**
 * main - prints name of compliation file with new name
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
