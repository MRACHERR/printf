#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_putunbr(unsigned int nbr);
int	ft_format(va_list ptr, const char format);
int	ft_hexlow(unsigned int h);
int	ft_hexup(unsigned int h);
int	ft_ptr(void *addr);
int	ft_printf(const char *s, ...);
#endif