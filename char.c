#include "main.h"

/**
 * printchar_c - prints a character.
 * @ch: arguments.
 * Return: integer value 1 on success.
 */
int printchar_c(va_list ch)
{
	char cha;

	cha = va_arg(ch, int);
	_putchar(cha);
	return (1);
}
