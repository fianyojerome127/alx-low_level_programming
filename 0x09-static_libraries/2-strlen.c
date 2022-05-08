#include "main.h"
/**
 * _strlen - give the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char p1 = s[0];

	while (p1 != '\0')
	{
		sum++;
		p1 = s[i++];
	}
	return (sum);
}
