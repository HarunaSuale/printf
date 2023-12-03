#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct arguments - change to printf
 * @cha: char pointer of the specifiers
 * @fun: function for the conversion specifier
 *
 */

typedef struct arguments
{
	char *cha;
	int (*fun)();
} getFun;

int printPercent(void);
int printStr(va_list str);
int strlent(char *c);
int strlentc(const char *c);
int printchar_c(va_list ch);
int _putchar(char a);
int _printf(const char *format, ...);

#endif
