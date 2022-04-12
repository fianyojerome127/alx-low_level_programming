#include "main.h"
/**
 * _5-sign.c - checks for alphabetic character
 * @c: takes in a character
 * Return: 1 if letter, owercase, uppercase;0 for otherwise
 */
int _sign(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
