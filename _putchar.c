#include "main.h"

/**
 * _putchar - prints the characters to stdout
 * @a: function parameter
 *
 * Return: 1 after execution.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
