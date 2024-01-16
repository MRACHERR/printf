/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:58:28 by acherraq          #+#    #+#             */
/*   Updated: 2024/01/16 22:41:00 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
    int count;
    int i;
    va_list  ptr;
    va_start(ptr, s);
    
    i = 0;
    while (s[i])
    {
        if (s[i] == '%')
        {
            if (s[i + 1] == '\0')
                break ;
            count += ft_format(ptr, s[i++]);
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
    ft_printf("hello");
}