/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:58:28 by acherraq          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:33 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_printf(const char *s, ...)
{
    int count;
    int i;
    va_list  ptr;
    va_start(ptr, s);

    if (!s)
		return (0);
    count = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == '%')
        {
            if (s[i + 1] == '\0')
                break ;
            count += ft_format(ptr, s[++i]);
        }
        else
        {
            ft_putchar(s[i]);
            count++;
        }
        i++;
    }
    va_end(ptr);
    return (count);
}

int main()
{
    //ft_printf("hello");
    char c = 'z';
    c = sizeof(ft_printf("%u\n %s", -214748364, "hellloc fuc"));
    printf("%d", c);
    //printf("%d",-2147483648); 
}