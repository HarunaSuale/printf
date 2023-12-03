#include "main.h"

/**
 * strlent - finds the lenght of a string.
 * @c: string
 * Return: integer.
 */

int strlent(char *c)
{
	int k;

	for (k = 0; c[k] != 0; k++);
		
	return (k);

}

/**
 * strlentc - finds length of a string but for constant characters
 * @c: string
 * Return: integer
 */

int strlentc(const char *c)
{
	int k;

	for (k = 0; c[k] != 0; k++)
		;
	return (k);
}

