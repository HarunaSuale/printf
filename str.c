#include "main.h"

/**
 * printStr - function for string
 * @str: function parameter
 * Return: 0 after execution
 */

int printStr(va_list str)
{
	char *wrd;
	int strLen, i = 0;

	wrd = va_arg(str, char*);

	if (wrd == NULL)
	{
		strLen = strlent(wrd);
		for (i = 0; i < strLen; i++)
			_putchar(wrd[i]);
		return (strLen);
	}
	else
	{
		strLen = strlent(wrd);
		for (i = 0; i < strLen; i++)
			_putchar(wrd[i]);
		return (strLen);
	}

}
