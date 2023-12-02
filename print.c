#include "main.h"


int _printf(const char *format, ...){

    int len = 0;
    va_list args;

    if (format == NULL)
        return (-1);
    va_start(args, format);
    while(*format)
    {
        if(*format != '%')
        {
            write(1, format, 1);
            len++;
        }
        else{
            format++;
            if(format == "\0")
                return len;
            if(*format == '%')
            {
                write(1, format, 1);
                len++;
            }
            else if (*format == 'c')
            {
                char c = va_arg(args, int);
                write(1, &c, 1);
                len++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char*);
                int strZise = strlen(str);

                while(*str < strZise){
                    write(1, str++, 1);
                }
                len += strZise;
            }
        }
        format++;
        return (len);

    }
}
