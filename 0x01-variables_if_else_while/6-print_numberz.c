#include <stdio.h>

/**
 * main - Prints all single digits numbers of base 10 statrting from 0, variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}
