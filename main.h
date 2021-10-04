#ifndef _PRINTF_MAIN_H
#define _PRINTF_MAIN_H

#include "stdarg.h"
#include "stdlib.h"

int _putchar(char c);
int _printf(const char *format, ...);
int put_str(char *str);
int put_int(int n);
int get_printing_func(char a, va_list *ap);

#endif /* _PRINTF_MAIN_H */
