#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	getFun key[] = {
		{"%s", printStr}, {"%c", printchar_c},
		{"%%", printPercent},
	};

	va_list arg;
	int i = 0, j, length = 0;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (key[j].cha[0] == format[i] && key[j].cha[1] == format[i + 1])
			{
				length += key[j].fun(arg);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(arg);
	return (length);
}
