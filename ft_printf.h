#ifndef FT_PRINTF_H 
#define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
int ft_putchar(char c);
int ft_format(va_list ptr, const char format);
#endif